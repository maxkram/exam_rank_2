#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while (s[i])
    {
		j = 0;
        while (reject[j])
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <string.h>

int main () {
   int len;
   int len1;
   const char str1[] = "ABCDEF4960910";
   const char str2[] = "913";

   len = strcspn(str1, str2);
   len1 = ft_strcspn(str1, str2);

   printf("First matched character is at %d\n", len + 1);
   printf("First matched character is at %d\n", len1 + 1);
  
   return(0);
}