#include <stdio.h>
/**
 * main - A program that shows the sizes of various types
 *
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
printf("Size of int is: %lu bytes(s)\n", sizeof(int));
printf("Size of long int is: %lu byte(s)\n", sizeof(long int));
printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of float is: %lu byte(s)\n", sizeof(float));
return (0);
}
