#include <iostream>
#include <fstream>
#include <unistd.h>
#include "PeriodicTask.h"

#include "cmath"
#include "poll.h"
#include "Timer.h"

int numG=0;
int num1=0;
int num2=0;

void function1()
{
    num1++;
    numG++;
    usleep(2e3);
}

void function2()
{
    numG++;
    num2++;
}

int main() {
    Timer mainLoopTimer;
    PeriodicTaskManager taskManager;
    PeriodicFunction Task1(
            &taskManager, .001, "task1", function1,0);
    PeriodicFunction Task2(
            &taskManager, .001, "task2", function2,1);
    mainLoopTimer.start();
    Task1.start();
    Task2.start();

    for (int i=0;i<100;i++) {

        usleep(1e6);
//        taskManager.printStatus();
    }
    printf("num1=%d,num2=%d,numG=%d\n",num1,num2,numG);
    printf("MainLoop_Time=%.3f ms\n",mainLoopTimer.getMs());
    taskManager.printStatus();
    return 0;
}













