#pragma once
#include <iostream>
#include <list>
#include "Task.hpp"
class TaskManager
{
public:

	TaskManager();

	~TaskManager();

	void AddTask(Task newTask);

	void RemoveTask(Task taskToRemove);

	void ShowTask();

private:
	std::list<Task> taskList;
};

