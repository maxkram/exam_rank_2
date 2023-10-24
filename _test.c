#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include "ft_list.h"
// #include "flood_fill.h"
#include "sort_list.h"

int sp(char c)
{
	return c==32||c==9;
}

void rostring(char *s)
{
	int k, i = 0;
	if (*s)
	{
		while (sp(s[i]))
			i++;
		k = i;
		while (s[i] && !sp(s[i]))
			i++;
		while (s[i])
		{
			if (s[i] && !sp(s[i]) && sp(s[i - 1]))
			{
				while (s[i] && !sp(s[i]))
					write(1, &s[i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (s[k] && !sp(s[k]))
			write(1, &s[k++], 1);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return 0;
}