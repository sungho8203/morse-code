#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

static int __init a(void){
    printk("hello");
    return 0;
}

static void __exit b(void){
    printk("bye");
}

module_init(a);
module_exit(b);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("sungho <sungho8203@gmail.com>");
MODULE_DESCRIPTION(" ");
MODULE_VERSION("1.0.0");