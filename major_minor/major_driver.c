//Author: SATEJ VINAYAK KHANDEPARKAR
//MASTERS IN EMBEDDED AND INTELLIGENT SYSTEMS
//HALMSTAD UNIVERSITY, SWEDEN
// FOR TESTING MAJOR AND MINOR NUMBERS FOR DRIVER LINKING

#include <linux/init.h>
#include <linux/module.h>
#include <linux/version.h>
#include <linux/types.h>
#include <linux/kdev_t.h>
#include <linux/fs.h>

MODULE_LICENSE("Dual BSD/GPL");

static dev_t first; // global variable for first device number

static int  __init hello_init(void) //constructor
{
	printk(KERN_INFO "Hello : MY_DRIVER Registered \n");
	if (alloc_chrdev_region( &first , 0, 3 , "satej" ) < 0)
		{
			return -1;
		}
	printk(KERN_INFO "<Major , Minor>:< %d , %d>\n",MAJOR(first),MINOR(first));	
	return 0;


}

static void __exit hello_exit(void) //destructor
{
	unregister_chrdev_region(first, 3);
	
	printk(KERN_INFO "goodbye : MY_DRIVER unregistered \n");


}

module_init(hello_init);
module_exit(hello_exit);



