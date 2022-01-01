#pragma once
#include<objbase.h>
class ComManager
{
private:
	ComManager()
	{
		if (FAILED(CoInitializeEx(nullptr, COINITBASE_MULTITHREADED)))
		{

		}
	}
	~ComManager()
	{

	}
private:
	static ComManager manager;
};