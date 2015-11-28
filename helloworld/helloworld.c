#include <linux/module.h>
#include <linux/sched.h>

static int __init hello(void)
{
	printk(KERN_INFO "Hello, World!\n");
	printk(KERN_INFO "Proc is '%s'\n",current->comm);
	printk(KERN_INFO "PID is %i\n",current->pid);
	return 0;
}

static void __exit gbye(void)
{
	printk(KERN_INFO "Goodbye, World!\n");
}

module_init(hello);
module_exit(gbye);

MODULE_AUTHOR("Computeristgeek <salahuddin.kazak@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A Hello World LKM");
