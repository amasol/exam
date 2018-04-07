/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 18:47:20 by amasol            #+#    #+#             */
/*   Updated: 2018/03/10 18:47:21 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


int    ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main()
{
	char *s1 = "f82F6hxtk4";
	char *s2 = "f82F6hxtk4";
	printf("%d\n",ft_strcmp(s1,s2));
	return (0);
}