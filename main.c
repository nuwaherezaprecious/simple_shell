#include "shell.h"

/*
 * main - prints the arguments without using argc
 * @main: entry point
 * @argc: counts the members
 * @argv: stores the members
 *Return 0 Always
 */
int main(int argc, char *argv[])
{
	int counter;

	main(void);
	for (counter = 0; counter < argc; counter++)
	{
		printf("argv[%2d]: %s\n", counter, argv[counter]);
	}
	return (0);
}
