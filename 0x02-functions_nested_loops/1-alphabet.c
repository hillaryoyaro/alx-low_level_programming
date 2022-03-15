#include "alx.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *x = "Alx";

	while (*x)
	{
	_putchar(*x);
		x++;
	}
	_putchar('\n');
	return (0);
}
