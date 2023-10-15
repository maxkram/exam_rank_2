#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

void str_capitalizer(char *str)
{
	int i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	write(1, &str[i], 1);
	while(str[++i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if(str[i] >= 'a' && str[i] <= 'z' && (str[i - 1] == 32 || str[i - 1] == 9))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int ac, char **av)
{
	if (ac<2)
		write(1, "\n", 1);
	else
	{
		int x = 1;
		while(x < ac)
		{
			str_capitalizer(av[x]);
			write(1, "\n", 1);
			x++;
		}
	}
	return 0;
}