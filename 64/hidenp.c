#include <unistd.h>

void	hidenp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] && s1[i] == s2[j])
			i++;
		j++;
	}
	if (!s1[i])
			write(1, "1", 1);
		else
			write(1, "0", 1);
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return 0;
}