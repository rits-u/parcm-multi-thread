//#include <iostream>
//#include "IETThread.h"
//
//float data = 0.0f;
//
////priority
//int turn = 0;
//
////which thread is running
//bool flag[2] = { false, false };
//
//
//class ThreadA : public IETThread {
//private: 
//	void run() override {
//		while (true) {
//			//thread A is trying to run / enter critical section
//			flag[0] = true;					
//
//			//give priority to the other thread
//			turn = 1;				// asking Thread 1: are you done running?
//
//			//wait until thread B is done modifying data
//			while (flag[1] && turn == 1) {
//				//waiting
//			}
//			
//			IETThread::sleep(500);
//			data = data + 100;
//			std::cout << data << std::endl;
//		
//			//thread A is done
//			flag[0] = false;
//		}
//	}
//};
//
//
//class ThreadB : public IETThread {
//private:
//	void run() override {
//		while (true) {
//			//thread B is trying to run
//			flag[1] = true;
//
//			//give priority to the other thread
//			turn = 0;
//
//			//wait until thread A is done modifying the data
//			while (flag[0] && turn == 0) {
//
//			}
//
//			//continually remove data
//			IETThread::sleep(1500);
//			data = data - 100;
//			std::cout << data << std::endl;
//
//			//thread B is done
//			flag[1] = false;
//		}
//	}
//};
//
//
//
//int main() {
//	ThreadA a;
//	ThreadB b;
//
//	a.start();
//	b.start();
//
//	IETThread::sleep(10000);
//
//	return 0;
//}