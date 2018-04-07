/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/03 15:11:36 by amasol            #+#    #+#             */
/*   Updated: 2018/02/03 15:11:37 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\n' || argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		while ((argv[1][i] != '\n' && argv[1][i] != '\t' && argv[1][i] != ' ')
				&& argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}