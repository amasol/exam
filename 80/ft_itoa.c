/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 17:50:49 by amasol            #+#    #+#             */
/*   Updated: 2018/04/22 17:50:51 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		count(int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int 	n;
	int		num;
	int		size;
	char 	*str;

	n = 0;
	num = 0;
	num = nbr < 0 ? -nbr : nbr;
//	size = nbr > 0 ? count(nbr) : count(nbr) + 1;
	size = count(nbr);
	str = (char *)malloc(sizeof(char) *size);
	if (nbr < 0)
		str[n] = '-';
	n = size;
	if (str[n] == '\0')
		n--;
	while (num > 10)
	{
		str[n] = (num % 10) + '0';
		num = num / 10;
		n--;
	}
	str[n] = num + '0';
	return (str);
}

int		main()
{
	printf("%s\n", ft_itoa('A'));
	return (0);
}
