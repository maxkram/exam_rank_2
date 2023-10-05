#include <unistd.h>

int space(char c)
{
	return (c==32||c==9);
}

void rostring(char *s)
{
	int k, i=0;
	if(*s)
	{
		while(space(s[i]))
			i++;
		k=i;
		while(s[i]&&!space(s[i]))
			i++;
		while(s[i])
		{
			if(s[i]&&!space(s[i])&&space(s[i-1]))
			{
				while(s[i]&&!space(s[i]))
					write(1,&s[i++],1);
				write(1," ",1);
			}
			i++;
		}
		while(s[k]&&!space(s[k]))
			write(1,&s[k++],1);
	}
}

int main(int ac, char **av)
{
	if(ac>1)
		rostring(av[1]);
	write(1,"\n",1);
	return 0;
}