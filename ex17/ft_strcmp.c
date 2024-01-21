//

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		printf("boucle\n");
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "";
	s2 = "";
	printf("ma fonction %d ", ft_strcmp(s1, s2));
	printf("fonction de base: %d", strcmp(s1, s2));
	return (0);
}
