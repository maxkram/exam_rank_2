#include <unistd.h>

int main(int argc, char **argv)
{
	int start, end, i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == '\t'
				|| argv[1][i] == ' ')
					i--;
			end = i;
			while (argv[1][i] && argv[1][i] != '\t'
				&& argv[1][i] != ' ')
					i--;
			start = i + 1;
			int flg = start;
			while (start <= end)
				write(1, &argv[1][start++], 1);
			if (flg)
				write(1, " ", 1);
			
			
		}
	}
	write(1, "\n", 1);
	return (0);
}