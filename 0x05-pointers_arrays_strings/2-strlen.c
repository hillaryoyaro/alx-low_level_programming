/*
 * Auth:Hillary Oyaro.
 * File:2-strlen.c
 */
#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char c = s[0];

	while (c != '\0')
	{
		sum++;
		c = s[i++];
	}
	return (sum);
}
