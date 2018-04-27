#include <stdio.h>
#include <unistd.h>

int		ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	else
		return (c);
}

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}

void	ft_putstr(char const *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			write (1, str, 1);
			str++;
		}
	}
}

void	change_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_tolower(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 && ft_isalpha(str[i]))
			str[i] = ft_toupper(str[i]);
		while ((str[i] == ' ' || str[i] == '\t') && str[i + 1])
		{ 
			i++;
			if (ft_isalpha(str[i]))
				str[i] = ft_toupper(str[i]);
		}
		i++;
	}
	ft_putstr(str);
	write (1, "\n", 1);
}

int		main(int ac, char **av)
{
	int i;

	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (ac > i)
	{
		change_string(av[i]);
		i++;	
	}
 	return (0);
}