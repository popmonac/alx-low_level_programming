#include <stdio.h>
#include <time.h>

/**
 * main - This program generate random passwords
 * Return : (0)
 */

int main(void)
{
	int password[100];
	int i, add, n;

	add = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[1] = rand() % 78;
		add += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - add) - '0' < 78)
		{
			n = 2772 - add - '0';
			add += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
