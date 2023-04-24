# Bonnie_threadTest

To check if threads are successfully created:

1. run the program,  saying its name is "mainTest". 
2. open a terminal, use `pidof mainTest` to get the PID of process "mainTest". 
3. use `ps -T -p $PID$` to check the threads created by "mainTest". Furthermore, use `taskset -pc $PID$` to check the cpu affinity of a thread.

IMPORTANT: To guarantee the running period of the created thread, cpu isolation is required. For ubuntu, this is achieved by setting the isolcpus boot parameter:

1. open grub file, `sudo nano /etc/default/grub`

2. modified the following line:`GRUB_CMDLINE_LINUX_DEFAULT="quiet splash isolcpus=1,3"`, assign the cpu number as desired

3. ran `sudo grub-update`

