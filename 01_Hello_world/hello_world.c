#include <linux/module.h>
#include <linux/init.h>

/* Meta informations */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("CYBERVARUN");
MODULE_DESCRIPTION("Hello world kernel module");


/**
* @brief This function is called, when the module is loaded into the kernel
*/

static int __init ModuleInit(void){
  printk("Hello, kernel!\n");
  return 0;
}

/*
 * @brief This function is called, when the module is removed from the kernel
 */

static void __exit ModuleExit(void){
  printk("Goodbye, kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
