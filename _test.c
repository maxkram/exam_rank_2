#include <unistd.h>

int space(char c)
{
	return (c==32||c==9);
}

int main(int ac, char **av)
{
	int i = 0;
	if(ac==2)
	{
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			while(space(av[1][i])||av[1][i]=='\0')
				i--;
			int end = i;
			while(av[1][i]&&!space(av[1][i]))
				i--;
			int start = i + 1;
			int flg = start;
			while(start<=end)
				write(1,&av[1][start++],1);
			if(flg!= 0)
				write(1," ", 1);
		}
		write(1, "\n", 1);
		return 0;
	}
	write(1, "\n", 1);
	return 0;
}