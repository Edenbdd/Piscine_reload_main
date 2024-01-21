//
//

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 0)
		result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

int	main(void)
{
	int	test;

	test = ft_recursive_factorial(0);
	printf("%d\n", test);
	test = ft_recursive_factorial(5);
	printf("%d\n", test);
	test = ft_recursive_factorial(-4);
	printf("%d\n", test);
	return (0);
}
