#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int     *ft_range(int start, int end)
{
	int		i;
	int		*l;
	int		k;

	i = 0;
	k = (start <= end) ? end - start : start - end;
	l = (int *)malloc(sizeof(int) * k);
	if (l == NULL)
		return (NULL);
	while (end >= start)
	{
		l[i] = end;
		end--;
		i++;
	}
	return (l);
}