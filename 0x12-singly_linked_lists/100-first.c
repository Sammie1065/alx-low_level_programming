#include <stdio.h>
/**
 * myBringupFun - a func that prints out something nice before
 * the main func is executed.
 */
void myBringupFun(void) __attribute__ ((constructor));


void myBringupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
