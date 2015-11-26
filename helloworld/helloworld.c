#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int hello(void)
{
	printk(KERN_NOTICE "Hello, World!\n");
	return 0;
}

static void gbye(void)
{
	printk(KERN_NOTICE "Goodbye, World!\n");
}

module_init(hello);
module_exit(gbye);

MODULE_AUTHOR("Computeristgeek <salahuddin.kazak@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A Hello World LKM");
