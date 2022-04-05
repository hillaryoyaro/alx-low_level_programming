/*
 * Auth:Hillary Oyaro
 * File:1-strdup.c
 */
#include<stdio.h>
#include<stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, dup;
	char *array;

	if (str == NULL)
		return (NULL);

	for (dup = 0; dup <= *str; dup++)
	{
	}

	dup += 1;
	array = malloc(sizeof(char) * dup);

	for (i = 0; i < dup; i++)
		array[i] = str[i];

	if (array == NULL)
		return (NULL);
	return (array);
}
