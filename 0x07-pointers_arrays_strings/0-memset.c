/*
 * Auth:Hillary Oyaro
 * File:0-memset.c
 */
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill in
 * @b: constant byte to fill s with
 * @n: number of bytes to write
 *
 * Return: a pointer to the memory area s
 */
char *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
