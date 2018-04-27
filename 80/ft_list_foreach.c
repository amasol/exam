#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list list_ptr;

	list_prt = begin_list;
	while (list_prt)
	{
		(*f)(list_ptr->data);
		list_prt = list_ptr->next;
	}
}