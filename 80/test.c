#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#inclide "ft_list.h"

int		ft_count(t_list *lst)
{
	int i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
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
	t_list 	*new;
	int		len;
	int		ps;

	ps = 0;
	len = ft_count(lst);
	while (len)
	{
		new = lst;
		while (new)
		{
			if (tmp->next && (*cmp)(tmp->data, tmp->next->data))
			{
				ps = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = ps;
			}
			tmp = tmp->next;
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