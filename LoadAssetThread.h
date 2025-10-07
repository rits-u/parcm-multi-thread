#pragma once

#include <iostream>
#include "IETThread.h"
#include "IExecutionEvent.h"
#include "TextureManager.h"

class LoadAssetThread : public IETThread 
{
public:
	LoadAssetThread() {}
	~LoadAssetThread() {}

	LoadAssetThread(int id, IExecutionEvent* callback);

private:
	int id = 0;
	void run() override;
	IExecutionEvent* OnFinished;
};

