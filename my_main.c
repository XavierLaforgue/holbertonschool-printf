#include "main.h"

/**
 * main - tests my_printf
 * Return: always 0
 */

int main(void)
{
	unsigned int std_bytes, my_bytes;
	char *str;

	/* str = "Hello\tWorld! %c%c%cjour %s!\n"; */
	str = "Hello\n";

	my_bytes = _printf(str, 'B', 'o', 'n', "Monde");

	std_bytes = printf(str, 'B', 'o', 'n', "Monde");

	printf("my_bytes = %u\n", my_bytes);

	printf("std_bytes = %u\n", std_bytes);

	return (0);
}
