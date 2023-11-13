#include "Task.hpp"
#include <iostream>

Task::Task(std::string n): name {n} 
{
}

void Task::CompleteTask(){
	isComplete = true;
}

Task::~Task() {
}