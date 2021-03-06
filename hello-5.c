#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/stat.h>


static char *myName = "Pooja";
static char *myStreet = "Mickley Run";
static char *myCity = "Pennsylvania";
static int zipCode = 18052;


module_param(myName, charp, 0000);
MODULE_PARM_DESC(myName, "String Name");

module_param(myStreet, charp, 0000);
MODULE_PARM_DESC(myName, "String myStreet");

module_param(myCity, charp, 0000);
MODULE_PARM_DESC(myName, "String myCity");

module_param(zipCode, int, 0000);
MODULE_PARM_DESC(zipCode, "Int zipCode");



static int __init hello_5_init(void)
{
	int i;
	printk(KERN_INFO "Loading Hello 4: Hello World 5\n");
	printk(KERN_INFO "================================");
	printk(KERN_INFO "Name : %s\n", myName);
	printk(KERN_INFO "Street : %s\n", myStreet);
	printk(KERN_INFO "City : %s\n", myCity);
	printk(KERN_INFO "ZipCode : %d\n", zipCode);

	return 0;
}

static void __exit hello_5_exit(void)
{
	printk(KERN_INFO "Goodbye, World 5\n");
}

module_init(hello_5_init);
module_exit(hello_5_exit);

