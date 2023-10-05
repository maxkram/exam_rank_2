#include <unistd.h>

int space(char c)
{
	return(c==32||c==9);
}

int main(int ac, char **av)
{
	if(ac==2)
	{
		int i = 0;
		while(space(av[1][i]))
			i++;
		while(!space(av[1][i])&&av[1][i])
			write(1,&av[1][i++],1);
	}
	write(1,"\n",1);
	return 0;
}