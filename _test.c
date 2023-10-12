#include <stdlib.h>

int space(char c)
{
	return (c==32||c==9||c=='\n');
}

int wc(char *s)
{
	int cnt = 0;
	while(*s)
	{
		if(!space(*s))
		{
			cnt++;
			while(!space(*s)&&*s)
				s++;
		}
		else
			s++;
	}
	return cnt;
}

char **ft_split(char *str)
{
	
}