#include "main.h"
#include <stdio.h>
/**
 * leet - this function converts specific characters to 4-3-0-7-1
 * @s: the string to iterate through
 * Return: return the converted string
 **/

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char leet[11] = "aAeEoOtTlL";
	int convert[5] = {4, 3, 0, 7, 1};


	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j])
			{
				s[i] = convert[j / 2] + 48;
			}
			j++;
		}
		i++;
	}
	return (s);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
