#pragma once

#include "IETThread.h"
#include "WorkerThread.h"
#include "IWorkerAction.h"

#include <queue>
#include <unordered_map>

class ThreadPool : public IETThread, public IFinishedTask {	

public:
	ThreadPool(int workerCount);
	~ThreadPool();

	void StartScheduling();
	void StopScheduling();

	void ScheduleTasks(IWorkerAction* task);

private:
	void run() override;
	void OnFinishedTask(int id) override;

	bool isRunning = false;
	int workerCount = 1;

	std::queue<IWorkerAction*> PendingTasks;				//tasks to be distributed
	std::unordered_map<int, WorkerThread*> ActiveThreads;	//currently running tasks / threads
	std::queue<WorkerThread*> InactiveThreads;				//idle threads
};

