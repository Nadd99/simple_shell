#include "shell.h"
/**
 * _strlen - returns length of string
 * @s: string to be counted
 * Return: lenght
 */
int _strlen(char *s)
{
	int len;

	for (len = 0 ; *s != '\0' ; s++)
	{
		len++;
	}
	return (len);
}
