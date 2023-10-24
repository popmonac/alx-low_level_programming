#include "main.h"
/**
 * _strcpy - This Function copies the string pointed to by src,
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *letter = dest;

	while (*src)
		*dest++ = *src++;
	return (letter);
}
