#include <stdio.h>
#include <stdlib.h>
void	ft_fprime(char *str)
{
	int nb;
	int div;

	div = 2;
	nb = atoi(str);
	if (nb == 1)
		printf("1");
	if (nb <= 1)
		return ;
	while (div <= nb)
	{
		if (nb % div == 0)
		{
			printf("%d", div);
			if (nb == div)
				return ;
			printf("*");
			nb = nb / div;
			div = 1;
		}
		div++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_fprime(argv[1]);
	printf("\n");
	return (0);
}







void	fprime(char *str)
{
	int nb;
	int div;

	nb = atoi()
	div = 2;

}


















