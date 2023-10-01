#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

int	*ft_rrange(int start, int end)
{
	int *rrange;
	int i = 0;

	if (start > end)
		rrange=(int *)malloc(sizeof(int)*(start-end)+1);
	else
		rrange=(int *)malloc(sizeof(int)*(end-start)+1);
	while(start!=end)
	{
		rrange[i++]=end;
		end-=(start>end)?-1:1;
	}
	rrange[i]=end;
	return (rrange);
}

int main()
{
	int i = 0;
	int *p = ft_rrange(1, 3);
	while(i <= 2)
		printf("%d ", p[i++]);
	printf("\n");

	i = 0;
	p = ft_rrange(-1, 2);

	while(i <= 3)
		printf("%d ", p[i++]);
	printf("\n");

	i = 0;
	p = ft_rrange(0, 0);

	while(i <= 0)
		printf("%d ", p[i++]);
	printf("\n");

	i = 0;
	p = ft_rrange(0, -3);

	while(i <= 3)
		printf("%d ", p[i++]);
	printf("\n");	

	return (0);
}