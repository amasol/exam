#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	slovo(char *str, char *tmp)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && str[i])
			i++;
		while ((str[i] != ' ' && str[i] != '\t') && str[i])
			tmp[j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
//		while ((str[i] != ' ' && str[i] != '\t') && str[i])
//		{
//			write(1, &str[i], 1);
//			i++;
//		}
//		if (str[i] == ' ' || str[i] == '\t')
//			write(1, " ", 1);
	}
}

void	rostring(char *str)
{
	int i;
	int j;
	int len;
	char *tmp;

	i = 0;
	j = 0;
	len = 0;
	len =ft_strlen(&str[i]);
	tmp = (char *)malloc(sizeof(char) * len);
	slovo(str, tmp);
	while (str[i])
	{

//		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
//			i++;
	}
}

int		main(void)
{
	int i;
	char *str = "123    asdc   1";

	i = 0;
	rostring(&str[i]);
	write(1, "\n", 1);
	return (0);
}