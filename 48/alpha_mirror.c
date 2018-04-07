/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 18:50:35 by amasol            #+#    #+#             */
/*   Updated: 2018/02/07 18:50:37 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int c;
	int z;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		c = 77 +(78 - argv[1][i]);
		z = 109 +(110 - argv[1][i]);
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			ft_putchar(c);
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			ft_putchar(z);
		else
			ft_putchar(argv[1][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}