#include "TaskManager.hpp"
#include <iostream>

TaskManager::TaskManager() {};

TaskManager::~TaskManager() {};

void TaskManager::AddTask(Task newTask) {
	taskList.push_front(newTask);
}

void TaskManager::RemoveTask(Task taskToRemove) {

}

void TaskManager::ShowTask() {
	for (Task task : taskList) {
		std::cout << task.name << std::endl;
	}
}


