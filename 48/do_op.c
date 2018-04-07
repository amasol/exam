/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 17:24:16 by amasol            #+#    #+#             */
/*   Updated: 2018/03/10 17:24:18 by amasol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void		operations(char *perv, char *str, char *vtor)
{
	int num1;
	int num2;
	int res;

	num1 = atoi(perv);
	num2 = atoi(vtor);
	res = 0;
	if (str[0] == '+')
		res = num1 + num2;
	else if (str[0] == '-')
		res = num1 - num2;
	else if (str[0] == '*')
		res = num1 * num2;
	else if (str[0] == '/')
		res = num1 / num2;
	else if (str[0] == '%')
		res = num1 % num2;
	printf("%d\n", res);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		write(1, "\n", 1);
	else
		operations(argv[1], argv[2], argv[3]);
	return (0);
}



















