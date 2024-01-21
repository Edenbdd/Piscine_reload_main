//

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	count;

	if (argc == 1)
		return (0);
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
