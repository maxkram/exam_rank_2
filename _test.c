#include <unistd.h>

int is_space(char c)
{
	return (c==32||c==9);
}

int main(int ac, char **av)
{
    int i;
    int flg = 0;

    if (ac == 2)
    {
        i = 0;
        while (is_space(av[1][i]))
            i++;
        while (av[1][i])
        {
            if (is_space(av[1][i]))
                flg = 1;
            if (!is_space(av[1][i]))
            {
                if (flg)
                    write(1, " ", 1);
                flg = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}