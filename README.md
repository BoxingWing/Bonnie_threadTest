# Bonnie_threadTest

To check if threads are successfully created, first run the program,  saying its name is "mainTest". Second, open a terminal, use "pidof mainTest" to get the PID of process "mainTest". Third, use "ps -T -p $PID$" to check the threads created by "mainTest". Furthermore, use "taskset -pc $PID$" to check the cpu affinity of a thread.
