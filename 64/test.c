#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	epur_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	j = ft_strlen(&str[j]);
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	j = j - 1;
	while (str[j] == ' ' || str[j] == '\t')
		j--;
	j++;
	while (j > i)
	{
		if ((str[i] != ' ' || str[i] != '\t') && j > i)
		{
			write(1, &str[i], 1);
			i++;
		}
		if ((str[i] == ' ' || str[i] == '\t') && j > i)
		{
			i++;
			if ((str[i] == '.'  && str[i] != '\0') && j > i)
			{
				write(1, ".", 1);
				break ;
			}
			write(1, " ", 1);
//			i++;
		}
		while ((str[i] == ' ' || str[i] == '\t') && j > i)
			i++;
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
	{
		epur_str(av[1]);
		return (0);
	}
}
