#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes all words of a string
 * @ch: character to capitalize
 * Return: capital character
 */
char *cap_string(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((ch[i] >= 'a' && ch[i] <= 'z'))
			{
				ch[i] = ch[i] - 32;
				continue;
			}
		}
		if (ch[i] == ' ' || ch[i] == '	' || ch[i] == '.')
		{
			++i;
			if (ch[i] >= 'a' && ch[i] <= 'z')
			{
				ch[i] = ch[i] - 32;
				continue;
			}
		}
		if (ch[i] == '\n')
		{
			++i;
			if (ch[i] >= 'a' && ch[i] <= 'z')
			{
				ch[i] = ch[i] - 32;
				continue;
			}
		}
	}
	return (ch);
}
