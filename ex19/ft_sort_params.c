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

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int	count;
	char	*temp;
	int	find;

	if (argc == 1)
		return (0);
	count = 1;		
	find = 1;
	while (find)
	{
		find = 0;
		while (count < argc -1)
		{
			printf("boucle\n");
			if (ft_strcmp(argv[count], argv[count + 1]) > 0)
			{
				printf("boucle swap\n");
				temp = argv[count];
				argv[count] = argv[count + 1];
				argv[count + 1] = temp;
				printf("%s\n", argv[count]);
				printf("%s\n", argv[count +1]);
				find = 1;
			}
			count++;		
		}
	}
	count = 1;
	while (count < argc)
	{
		printf("boucle print\n");
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
