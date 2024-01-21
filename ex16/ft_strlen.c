//

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

int	main(void)
{
	char	*str;

	str = "";
	printf("%d\n", ft_strlen(str));
	return (0);
}
