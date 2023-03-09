#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void epub_str(char *str)
{
	char flg = 0;
	int i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (flg == 1)
				ft_putchar(' ');
				flg = 0;
				ft_putchar(str[i]);
		}
		else if (flg == 0)
			flg = 1;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		epub_str(argv[1]);
	ft_putchar('\n');
	return (0);
}