#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_corect(char *str)
{
	int i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while ((str[i] != ' ' && str[i] != '\t') && str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void 	ft_rev_print(char *str)
{
	int j;

	j = 0;
	j = ft_strlen(&str[j]);
	j = j - 1;
	while (j > 0)
	{
		while ((str[j] == ' ' || str[j] == '\t') && j > 0)
			j--;
		while ((str[j] != ' ' && str[j] != '\t') && j > 0)
			j--;
		ft_corect(&str[j]);
		write(1, " ", 1);
	}
	write(1, "\n", 1);
}


int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		ft_rev_print(av[1]);
	return (0);
}