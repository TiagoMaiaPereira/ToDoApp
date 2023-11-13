#pragma once
#include <iostream>

class Task
{
public:

	std::string name;

	Task(std::string n);

	~Task();

	void CompleteTask();

private:
	bool isComplete = false;
};

