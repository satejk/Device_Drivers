//Author: SATEJ VINAYAK KHANDEPARKAR
//MASTERS IN EMBEDDED AND INTELLIGENT SYSTEMS
//HALMSTAD UNIVERSITY, SWEDEN

#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_ALERT"Hello, World \n");
	return 0;


}

static void hello_exit(void)
{
	printk(KERN_ALERT"GOODBYE, CRUEL WORLD \n");


}

module_init(hello_init);
module_exit(hello_exit);



