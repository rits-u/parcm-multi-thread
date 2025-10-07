//LECTURE: 09-18-2025

////#include <iostream>
////#include <thread>
////
////int x = 0;
////
////void PrintX() {
////	std::cout << "X: " << x << std::endl;
////}
////
////void TestThread() {
////	//std::this_thread::sleep_for(std::chrono::milliseconds(6000));
////	x = 1;
////	std::cout << "From test thread " << std::endl;
////	PrintX();
////}
////
////int main() {
////	std::thread myThread(TestThread);
////	//myThread.join();
////	
////	x = 100;
////	std::cout << "From Main" << std::endl;
////	PrintX();
////
////	std::this_thread::sleep_for(std::chrono::milliseconds(500));
////
////	myThread.detach(); //kapag walagn delay, di hinihintay ni main thread si test thread
////	//with detach, the thread will still run but the main wont wait for it to finish to run/execute unlike join()
////	// you can put detach() in any order of the program flow
////
////	return 0;
////}
//
// 


//VERSION 2 BELOW


//#include <iostream>
//#include "IETThread.h"
//#include "IExecutionEvent.h"
//
//
//class SampleThread : public IETThread {
//
//public:
//	SampleThread() {}
//	~SampleThread() {}
//
//	void SetData(std::string _data) {
//		this->data = _data;
//	}
//
//	bool isRunning = true;
//	void SetCallback(IExecutionEvent* callback) {
//		onFinished = callback;
//	}
//
//private:
//	void run() override {
//		IETThread::sleep(500);
//		
//		std::cout << "Printing Data: " << this->data << std::endl;
//		isRunning = false;
//
//		this->onFinished->OnFinishedExecution();
//		delete this;
//	}
//	std::string data = "Default";
//	IExecutionEvent* onFinished;
//};
//
//class ThreadHandler : public IExecutionEvent {
//public:
//	bool threadDone = false;
//
//	void OnFinishedExecution() override {
//		std::cout << "Thread done " << std::endl;
//		threadDone = true;
//	}
//};
//
//int main() {
//	std::cout << "From MAIN thread " << std::endl;
//	ThreadHandler* handler = new ThreadHandler();
//	SampleThread* sample = new SampleThread();
//	sample->SetData("Sample 1");
//	sample->SetCallback(handler);
//	sample->start();
//
//	//while (!handler->threadDone) {
//	//	//progress bar
//	//	std::cout << "Am waiting..." << std::endl;
//	//}
//
//	do {
//		//progress bar
//		std::cout << "Am waiting..." << std::endl;
//	} while (!handler->threadDone);
//
//	delete handler;
//	//delete sample;
//
//	return 0;
//
//	//IETThread::sleep(500);
//}