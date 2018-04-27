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
/*
 *
 * #include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int len_nb(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int nb)
{
	int i;
	int len;
	int n;
	char *str;

	n = nb;
	i = 0;
	len = len_nb(n);
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while(n)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}


int		main(void)
{

	printf("%s\n", ft_itoa(0));
	return (0);
}
 */