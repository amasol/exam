#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int j;
	int i;
	int	*l;

	i = 0;
	j = (start >= end) ? start - end : end - start;
	l = (int *)malloc(sizeof(int) * j);
	while (start <= end)
	{
		l[i] = start;
		start++;
		i++;
	}
	return (l);
}

int		main()
{
	int k = 0;
	int j = 4;
	int *a;
	a = ft_range(k, j);
	while (k <= j)
	{
		printf("%d\n", a[k]);
		k++;
	}
	return (0);
}

/*
int   main(void)
{
	int* res;
	int i;

	res = ft_range(5, 10);

	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-2147483648, -2147483646);
	for (i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(10, 5);
	printf("%x\n", (unsigned int)res);
}
*/
