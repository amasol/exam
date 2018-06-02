/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:38:25 by amasol            #+#    #+#             */
/*   Updated: 2018/05/28 19:38:26 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ascending(int a, int b)
{
	return (a <= b);
}

int		count(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tm;
	int tmp;
	int len;

	len = count(lst);
	while (len)
	{
		tm = lst;
		while (tm)
		{
			if (tm->next && (*cmp)(tm->data, tm->next->data) == 0)
			{
				tmp = tm->data;
				tm->data = tm->next->data;
				tm->next->data = tmp;
			}
			tm = tm->next;
		}
		len--;
	}
	return (lst);
}
int	main(void)
{
	t_list *a;
	t_list *b;
	t_list *c;


	a = (t_list *)malloc(sizeof(t_list));
	b = (t_list *)malloc(sizeof(t_list));
	c = (t_list *)malloc(sizeof(t_list));


	a->data = 1;
	b->data = 9;
	c->data = 8;


	a->next = b;
	b->next = c;
	c->next = NULL;

	a = sort_list(a, ascending);
	printf("%d\n", a->data);
	printf("%d\n", b->data);
	printf("%d\n", c->data);
	return (0);
}
