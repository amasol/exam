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
int		ft_score(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		i++;
	while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
	{
		i++;
		j++;
	}
	return (j);
}

int		ft_score_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
		{
			j++;
			while ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i])
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
	int j;
	int k;
	char **ps;

	i = 0;
	k = 0;
	if (!(ps = (char **)malloc(sizeof(char *) * (ft_score(str) + 1))))
		return (NULL);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		j = 0;
		if (!(ps[k] = (char *)malloc(sizeof(char) * (ft_score_words(str) + 1))))
			return (NULL);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			ps[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		ps[k][j] = '\0';
		k++;
	}
	ps[k] = NULL;
	return (ps);
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

/*
char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **sp;

	i = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (!(sp = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i])
	{
		if (!(sp[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		j = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			sp[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		sp[k][j] = '\0';
		k++;
	}
	sp[k] = NULL;
	return (sp);
}
int		main(void)
{
	char **st;
	char *s= "aasdf sdf asdf   sasfd		fasdf ";

	st =ft_split(s);
	int i = 0;
	while(st[i])
		printf("%s\n", st[i++]);
	return (0);
}
*/