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
	str = "%%\n";

	my_bytes = _printf(str, 566, 'B', 'o', 'n', "Monde");

	std_bytes = printf(str, 566, 'B', 'o', 'n', "Monde");

	printf("my_bytes = %u\n", my_bytes);

	printf("std_bytes = %u\n", std_bytes);

	return (0);
}
