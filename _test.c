#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		int i = 0;
		while(s2[i])
		{
			if(*s1 == s2[i])
				return (char *) s2[i];
			i++;
		}
		s1++;
	}
	return 0;
}


int		main(void)
{
   char str[] = "1234567890";

   char sym[] = "9876";
  
   printf ("\"%s\" - Кусок первой строки в котором впервые встречаются символы из второй строки.\n", ft_strpbrk(str,sym));

   return (0);
}

// int main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		int i = 0;
// 		while(av[1][i])
// 		{

// 		}
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }