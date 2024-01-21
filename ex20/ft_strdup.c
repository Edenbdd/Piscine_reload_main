//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	count;

	count = 0;
	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	*s1;

	s1 = "blabla";
	printf("ma fonction: %s\n", ft_strdup(s1));
	printf("fonction de base: %s\n", strdup(s1));
	return (0);
}
