#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}
int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;
	if (start > end)
		i = (start - end) + 1;
	else
		i = (end - start) + 1;
	rrange = (int *)malloc(sizeof(int) * i);
	while (i--)
	{
		rrange[i] = start;
		start -= (start < end) ? (-1) : (1);
	}
	rrange[i] = end;
	return (rrange);
}
int		main(void)
{
	int	*arr;
	int	i;
	i = 1;
	arr = ft_rrange(0, 0);
	while (i--)
	{
		ft_putnbr(arr[i]);
		ft_putchar('\n');
	}
	return (0);
}


// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.