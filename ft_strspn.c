#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return ((char *)s);
	else if (!*s)
		return (NULL);
	else
		return (ft_strchr(s + 1, c));
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
   int len;
   const char str1[] = "ABCDEFG019874";
   const char str2[] = "ABCD";

   len = ft_strspn(str1, str2);

   printf("Length of initial segment matching %d\n", len );
   
   return(0);
}