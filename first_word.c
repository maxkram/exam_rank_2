#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        unsigned int i;

        i = 0;
        while (argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13))
            i++;
        while (!(argv[1][i] == 32 || (argv[1][i] >= 9 && argv[1][i] <= 13)) && argv[1][i])
            write(1, &argv[1][i++],1);
    }
    write(1, "\n", 1);
    return 0;
}
