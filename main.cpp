#include <iostream>
#include "BaseRunner.h"
int main() {
	BaseRunner runner;
	runner.run();

	return 0;
}
 






//#include <iostream>
//#include "IETThread.h"
//
//bool hasFood = false;
//bool hasOrder = false;
//
//class Escoffier : public IETThread {
//public:
//	void Cook() {
//		while (!hasOrder) {
//		}
//		std::cout << "Escoffier cooks\n";
//		hasFood = true;
//	}
//
//	void Enter() {
//		std::cout << "Escoffier enters\n";
//	}
//
//	void run() override {
//		Enter();
//		Cook();
//	}
//};
//
//class Furina : public IETThread {
//public:
//	void Order() {
//		std::cout << "Furina orders\n";
//		hasOrder = true;
//	}
//
//	void WaitForFood() {
//		while (!hasFood) {
//			std::cout << "Furina waiting\n";
//		}
//	}
//
//	void Eat() {
//		hasFood = false;
//		std::cout << "Furina eats\n";
//	}
//
//	void Enter() {
//		std::cout << "Furina enters\n";
//	}
//
//	void run() override {
//		Enter();
//		Order();
//		WaitForFood();
//		Eat();
//	}
//};
//
//int main() {
//	Escoffier esc;
//	Furina furina;
//
//	esc.start();
//	furina.start();
//
//	IETThread::sleep(1000);
//
//	return 0;
//}