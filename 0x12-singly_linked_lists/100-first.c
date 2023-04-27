#include <stdio.h>

/**
 * funtime - apply the constructor attribute to my funtime() so that
 * it is executed before my main function
 */

void funtime(void) __attribute__ ((constructor))
/**
 * funtime - implementation of funtime
 *
 */


void funtime(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
