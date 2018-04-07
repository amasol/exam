/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/01 16:10:08 by amasol            #+#    #+#             */
/*   Updated: 2018/02/02 15:49:42 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		write(1, "a\n", 2);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i++] == 'a')
		{
			write(1, "a\n", 2);
			return (0);
		}
	}
	write(1, "\n", 1);
	return (0);
}