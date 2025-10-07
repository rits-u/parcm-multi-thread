//seatwork 09-18-2025
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

std::mutex coutMutex;
bool running = true;

void PrintThread(int id) {
	while (running) {
		{
			std::lock_guard<std::mutex> lock(coutMutex);
			std::cout << "thread id: " << id << std::endl;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
	}
}
//
//int main() {
//	int threadCount = 10;
//	int runtime = 10000;
//
//	std::vector<std::thread> threads;
//	
//	for (int i = 0; i < threadCount; i++) {
//		threads.push_back(std::thread(PrintThread, i));
//	}
//
//	std::this_thread::sleep_for(std::chrono::milliseconds(runtime));
//	running = false;
//
//	for (auto& t : threads) t.join();
//
//	return 0;
//}


	