/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 19:02:57 by amasol            #+#    #+#             */
/*   Updated: 2018/03/10 19:03:00 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*strdup(const char *s1)
{
	int 	i;
	int 	len;
	char 	*str;

	i = 0;
	while (s1[len])
		len++;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

int		main()
{
	char str[] = "adsf";
	printf("%s\n", strdup(str));
}