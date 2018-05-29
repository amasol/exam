#include <unistd.h>
#include <stdio.h>
#include "ft_list.h"

// void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
// {
// 	t_list *list_ptr;

// 	list_ptr = begin_list;
// 	while (list_ptr)
// 	{
// 		(*f)(list_ptr->data);
// 		list_ptr = list_ptr->next;
// 	}
// }

void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}