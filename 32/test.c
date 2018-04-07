#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int len;

	i = 0;
	len =0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			len = argv[1][i] - 64;
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			len = argv[1][i] - 96;
		else
			ft_putchar(argv[1][i]);
		while (len)
		{
			ft_putchar(argv[1][i]);
			len--;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}