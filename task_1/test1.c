#include <linux/module.h>
#include <linux/kernel.h>

int init_module(void)
{
	pr_info("HEEEEEEEEEEEEEEEEEEEELP\n");
	return 0;

}

void cleanup_module(void)
{
	pr_info("NOOOOOOOOOOOOOOOOOOOOOOOO\n");
}

MODULE_LICENSE("GPL");
