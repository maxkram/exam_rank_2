#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = -1;
    while (++i < n && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return (s1);
}

char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != 32 && str[i] != 9 && str[i] != 10))
            i++;
    }
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
            i++;
        j = i;
        while (str[i] && (str[i] != 32 && str[i] != 9 && str[i] != 10))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}

int main(void)
{
    int i = 0;
    char **tab = ft_split("Breaking bad and Better call Saul");
    while (tab[i])
    {
        printf("string %d : %s\n", i, tab[i]);
        i++;
    }
    return (0);
}