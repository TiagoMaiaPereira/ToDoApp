#include <iostream>
#include "Task.hpp"
#include "TaskManager.hpp"


int main()
{
    TaskManager manager;
    //criar
    manager.AddTask(Task("test"));
    manager.AddTask(Task("Chatear a Ines"));
    //remove
    //mostrar tasks
    manager.ShowTask();
    //completar
}

