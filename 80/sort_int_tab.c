/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 19:31:30 by amasol            #+#    #+#             */
/*   Updated: 2018/05/28 19:31:31 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned i;
	unsigned j;
	int tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j] + 1)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
*/
void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned i;
	unsigned j;
	int		tmp;

	j = 0;
	while (j < size - 1)
	{
		i - 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int main(void)
{
	int len = 4;
	int i = 0;
	int n[4] = {4,3,2,1};
	sort_int_tab(n, 4);

	while (i < len)
	{
		printf("%d\n",n[i]);
		i++;
	}
	return (0);
}
