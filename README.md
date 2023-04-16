# Bonnie_threadTest

To check if threads are successfully created, first run the program,  says its name is "mainTest". Second, open a terminal, use "ps -a" check all the running processes, then find the one whose name is "mainTest" and record its PID. Third, use "ps -T -p $PID$" to check the threads created by "mainTest".
