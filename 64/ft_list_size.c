#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

int		ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		i++;
		if (begin_list->next)
			begin_list = begin_list->next;
		else
			break ;
	}
	return (i);
}


int		main()
{
	t_list ar;
	t_list *arg;

	arg = &ar;
	arg->data = 17;
	arg->next = malloc(sizeof(t_list));
	arg = arg->next;
	arg->data = 10;
	arg->next = NULL;
	arg = &ar;
	printf("%d\n", ft_list_size(arg));
	return (0);
}


















