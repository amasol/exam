/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 20:49:03 by amasol            #+#    #+#             */
/*   Updated: 2018/04/23 20:49:04 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_len_do_prb(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
		i++;
	return (i);
}

int		ft_kolvo_slov(char *str)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j++;
			while ( str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
				i++;
			if (str[i] == '\0')
				return (j);
		}
		i++;
	}
	return (j);
}

char    **ft_split(char *str)
{
	int i;
	int	j;
	int len;
	char **sp;
	char *tmp;

	i = 0;
	len = ft_kolvo_slov(str);
	if (!(sp = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		j = 0;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (!(tmp = (char *)malloc(sizeof(char) * (ft_len_do_prb(str) + 1))))
			return (NULL);
		while ((*str != ' ' && *str != '\t' && *str != '\n') && *str)
			tmp[j++] = *str++;
		tmp[j] = '\0';
		*sp++ = tmp;
		i++;
	}
	*sp = NULL;
	return (sp - len);
}

int main(void)
{
	char **a;
	int i;

	i = 0;
	a = ft_split("Hello         Wold   ");
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	return 0;
}

/*
int		main()
{
	char str[] = "asdfn asdfg";
	printf("%d\n", ft_kolvo_slov(str));
	return (0);
}*/