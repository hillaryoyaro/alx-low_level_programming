/*
 * Auth:Hillary Oyaro
 * File:2-str_concat.c
 */
#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int first, second, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (first = 0; first <= *s1; first++)
	{
	}

	for (second = 0; second <= *s2; second++)
	{
	}

	array = malloc(sizeof(char) * (first + second + 1));

	if (array == NULL)
		return (NULL);

	while (*s1)
	{
		array[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		array[i] = *s2;
		i++;
		s2++;
	}
	return (array);
}
