#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/*
int		ft_slova(char *str)
{
	int	i;
	int j;
	char

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			j++;
			while ( str[i] && (str[i] != ' ' && str[i] != '\t' && str[i]))
				i++;
			if (str[i] == '\0')
				return (j);
		}
		i++;
	}
	return (j);
}
 */
char **ft_split(char *str)
{
	int i;
	int j;
	int k;
	char **sp;

	i = 0;
	k = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\t')
		i++;
	if (!(sp = (char **)malloc(sizeof(char *) * 256)))
		return (NULL);
	while (str[i])
	{
		if (!(sp[k] = (char *)malloc(sizeof(char) * 4096)))
			return (NULL);
		j = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			sp[k][j++] = str[i++];
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		sp[k][j] = '\0';
		k++;
	}
	sp[k] = NULL;
	return (sp);
}
int		main(void)
{
	char **st;
	char *s= "aasdf sdf asdf   sasfd		fasdf ";

	st =ft_split(s);
	int i = 0;
	while(st[i])
		printf("%s\n", st[i++]);
	return (0);
}