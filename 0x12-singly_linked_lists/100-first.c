#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - This function is executed before the main function
 * It prints a couple of lines to the standard output.
 */
void first(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
