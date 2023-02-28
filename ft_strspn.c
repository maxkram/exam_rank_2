#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t		count;

	count = 0;
	while (*s)
	{
		if (ft_strchr(accept, *s))
			count++;
		else
			break;
		s++;
	}
	return (count);
}
#include <stdio.h>
#include <string.h>
int main () {
   int len, len1;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = ft_strspn(str1, str2);
   len1 = strspn(str1, str2);

   printf("Length of initial segment matching by ft_strspn %d\n", len );
   printf("Length of initial segment matching by strspn %d\n", len1 );
   
   return(0);
}