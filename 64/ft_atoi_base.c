#include <stdio.h>
#include <unistd.h>



int			ft_atoi(char *str)
{
	int	i;
	int neg;
	int num;

	i = 0;
	neg = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '-')
		neg = 1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-num);
	else
		return (num);
}

int		main()
{
	char str[] = " 			-121239";

	printf("%d\n", ft_atoi(str));
	return (0);
}