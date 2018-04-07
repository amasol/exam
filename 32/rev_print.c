/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/04 15:55:53 by amasol            #+#    #+#             */
/*   Updated: 2018/02/04 16:06:51 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(&argv[1][0]);
		while (len)
		{
			ft_putchar(argv[1][len - 1]);
			len--;
		}
	}
	ft_putchar('\n');
	return (0);
}