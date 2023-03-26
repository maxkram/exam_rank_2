
#include <stdio.h>
int main(void)
{
	int	start = 5;
	int	end = 10;
	int	*tab;
	int	i = 0;
	int	size = end - start + 1;
	tab = ft_range(start, end);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
