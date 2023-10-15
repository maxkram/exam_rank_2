#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

int main(int ac, char **av)
{
	if(ac==2)
	{
		int i = 1;
		int n = atoi(av[1]);
		if(n==1)
			printf("1");
		while(n>=++i)
		{
			if(n%i==0)
			{
				printf("%d", i);
				if(n==i)
					break;
				printf("*");
				n/=i;
				i=1;
			}
		}
	}
	printf("\n");
	return 0;
}