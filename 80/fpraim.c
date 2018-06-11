#include <stdio.h>
#include <stdlib.h>

void        do_it(int i, int flag, int tmp, int nbr)
{
    if (tmp == 1)
    {
        printf("1");
        return ;
    }
    while (i <= nbr && tmp)
    {
        if (tmp % i == 0)
        {
            if (flag == 1)
            {
                printf("*");
                flag = 0;
            }
            printf("%i", i);
            tmp /= i;
            flag++;
        }
        else if (tmp % i != 0)
            i++;
    }
}

int     main(int argc, char **argv)
{
    int     i;
    int     flag;
    int     tmp;
    int     nbr;

    i = 2;
    flag = 0;
    if (argc == 2)
    {
        nbr = atoi(argv[1]);
        tmp = nbr;
        do_it(i, flag, tmp, nbr);

    }
    printf("\n");
    return (0);
}