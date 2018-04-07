#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;
	int j = 0;
	int len;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n')
		i++;
	len = ft_strlen(&av[1][0]);
	j = len -1;
	while ((av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\n') &&
		av[1][i] != '\0')
	{
		ft_putchar(av[1][j]);
		j--;
	}
	ft_putchar('\n');
	return (0);
}