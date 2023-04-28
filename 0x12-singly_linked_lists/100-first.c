#include <stdio.h>
void __attribute__ ((constructor))before_main();
/**
 * before_main - execute function before main()does
 * Return: void
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
