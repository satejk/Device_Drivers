After you clone the folder follow the simple steps

1) navigate to the folder 
2) enter root mode using su root
3) run the Makefile Using make
4) load the module using insmod ./hello_world_module.ko
5) look for the kernel message using cat /var/log/kern.log
6) also check for the listed modules using lsmod
7)unload the module using rmmod hello_world_module
8) repeat step 5 and 6

9) welcome to Driver programming