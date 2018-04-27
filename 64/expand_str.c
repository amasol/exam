#include <unistd.h>

int		ft_srelen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	expand_str(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	j = ft_srelen(&str[j]);
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
			write(1, "   ", 3);
			i++;
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
		expand_str(av[1]);
		return (0);
	}
}
