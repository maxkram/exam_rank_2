#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	
	unsigned int result;
	unsigned int i = 0;
	
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
		{
			result = tab[i];
		}
		i++;
	}
	return result;
}

int main()
{
	int tab[8] = {3,1,7,4,5,0,9,6};
	printf("%d\n", max(tab, 8));
	write(1,"\n",1);
	return 0;
}