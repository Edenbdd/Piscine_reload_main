//

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*nb;
	int	count;
	int	len;

	count = min;
	len = 0;
	if (min >= max)
		return (NULL);
	while (count++ < max)
		len++;
	nb = (int *)malloc(sizeof(*nb) * len);
	if (!nb)
		return (NULL);
	count = min;
	while (count++ < len)
	{
		nb[count] = min;
		min++;
	}
	return (nb);
}

int	main(void)
{
	int	min;
	int	max;
	int	count;
	int	*arr;

	min = 4;
	max = 3;
	count = min;
	arr = ft_range(min, max);
	while (count++ < max)
		printf("%d\n", arr[count]);
	return (0);
}
