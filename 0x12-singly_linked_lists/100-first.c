#include <stdio.h>
void first_msg(void)__attribute__((constructor));

/**
* first_msg - prints message before main function is executed
*/

void first_msg(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
