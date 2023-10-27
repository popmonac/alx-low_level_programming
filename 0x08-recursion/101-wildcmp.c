#include <stdio.h>
#include "main.h"

int bandersnatch(char *i, char *j);
char *move(char *j);

/**
 * wildcmp - This function compares two strings recursively,
 * @i: !st string to compare
 * @j: 2nd string to compare
 *
 * Return: 1 if the strings can be considered identical
 * otherwise 0
 */
int wildcmp(char *i, char *j)
{
	/**
	 * this is going to be a sum of return values
	 */
	int sum = 0;

	/**
	 * if we reach the end of i and the char in j is a *
	 * and if the next chars of j are *, return 1
	 */

	if (*i == '\0' && *j == '*' && !*move(j))
		return (1);

	/**
	 * if the chars are equal in both strings,
	 * if we reached the end of i, return 1
	 * else increment i and j by 1
	 */
	if (*i == *j)
	{
		if (*i == '\0')
			return (1);
		return (wildcmp(i + 1, j + 1));
	}
	/**
	 * if we reached the end of both strings,
	 * return 0
	 */
	if (*i == '\0' || *j == '\0')
		return (0);

	/**
	 * if the char in j is a *
	 * finds the address of the first char after the *
	 * if we reached the end of j, return 1
	 * if the chars are equal, add the return values
	 * of wildcmp() to sum
	 * add the return value of bandersnatch() to sum
	 * convert non-zero to 1, keeps 0 at 0, return
	 */
	if (*j == '*')
	{
		j = move(j);
		if (*j == '\0')
			return (1);
		if (*i == *j)
			sum += wildcmp(i + 1, j + 1);
		sum += bandersnatch(i + 1, j);
		return (!!sum);
	}
	return (0);
}
/**
 * bandersnatch - checks recursively for all the paths when the
 * characters are equal
 * @i: first string
 * @j: second string
 *
 * Return: return value of wildcmp() or of itself
 */
int bandersnatch(char *i, char *j)
{
	/**
	 * if we reached the end of i, return 0
	 * if chars are equal, return the return value of wildcmp()
	 * increment i by 1, not j
	 */
	if (*i == '\0')
		return (0);
	if (*i == *j)
		return (wildcmp(i, j));
	return (bandersnatch(i + 1, j));
}

/**
 * *move - moves the current char past the *
 * @j: string to iterate ove
 *
 * Return: the address of the character after the *
 */
char *move(char *j)
{
	/**
	 * if the current char is a *
	 * increment j by 1
	 * else return the address of
	 * the first char past all *
	 */
	if (*j == '*')
		return (move(j + 1));
	else
		return (j);
}
