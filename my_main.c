#include "main.h"
#include <stdio.h>

/**
 * main - tests my_printf
 * Return: always 0
 */

int main(void)
{
	unsigned int my_bytes, std_bytes;

	my_bytes = my_printf("Hell%c %s", 'o', "World");
	std_bytes = printf("Hell%c %s", 'o', "World");

	printf("my_bytes = %u", my_bytes);

	return (0);
}
