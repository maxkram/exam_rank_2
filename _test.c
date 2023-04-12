#include <unistd.h>

int is_space(char c)
{
	return (c == 32 || c == 9) ? 1 : 0;
}

void rostring(char *str)
{
	int i = 0;
	int k;
	if (*str)
	{
		while (is_space(str[i]))
			i++;
		k = i;
		while (str[i] && !is_space(str[i]))
			i++;
		while (str[i])
		{
			if (str[i] && !is_space(str[i]) && is_space(str[i - 1]))
			{
				while (str[i] && !is_space(str[i]))
					write(1, &str[i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (str[k] && !is_space(str[k]))
			write(1, &str[k++], 1);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}