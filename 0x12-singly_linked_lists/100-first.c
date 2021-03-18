#include <stdio.h>

void msg(void) __attribute__ ((constructor));

/**
 * msg - execute before main
 */
void msg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
