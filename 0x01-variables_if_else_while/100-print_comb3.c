#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int x;
for (x = 0; x < 90; x++)
{
for ()
{
putchar((x / 10) + '0');
putchar((x % 10) + '0');
}
if (x != 89)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
