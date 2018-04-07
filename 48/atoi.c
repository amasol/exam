/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:07:32 by amasol            #+#    #+#             */
/*   Updated: 2018/03/02 18:31:33 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negativ;

	i = 0;
	nbr = 0;
	negativ = 0;
	while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t' ||
		str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '-')
		negativ = 1;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negativ == 1)
		return (-nbr);
	else
		return (nbr);
}

int		main()
{
	char str[] = "-123";
	printf("%d\n", ft_atoi(str));
	return (0);
}
