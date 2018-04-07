/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 20:22:16 by amasol            #+#    #+#             */
/*   Updated: 2018/03/10 20:22:22 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	verifikeichen_bez_index(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i++] == c)
			return (1);
	}
	return (0);
}

int 	verifikeichen(char c, char *str, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i++] == c)
			return (1);
	}
		return (0);
}

int 	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 3)
		write (1, "\n", 1);
	else
	{
		while (argv[1][i] != '\0')
		{
			if (!verifikeichen(argv[1][i], &argv[1][0], i) &&
				verifikeichen_bez_index(argv[1][i], &argv[2][0]))
				write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}