#include <unistd.h>

int ft_atoi(char *str)
{
	int res = 0;
	int sgn = 1;
	while (*str == 32 || (*str > 8 && *str < 14))
		str++;
	if (*str = '-')
		sgn = -1;
	if 
}