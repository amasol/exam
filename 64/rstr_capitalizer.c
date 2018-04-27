/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:11:17 by amasol            #+#    #+#             */
/*   Updated: 2018/04/18 17:11:18 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		main(int ac, char **av)
{
	int j;
	int i;
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] && ft_isalpha(av[i][j]))
				av[i][j] = ft_tolower(av[i][j]);
			if (av[i][j + 1] == ' ' || av[i][j + 1] == '\0')
				av[i][j] = ft_toupper(av[i][j]);
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}















