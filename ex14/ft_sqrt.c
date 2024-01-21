//

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	if (nb == 0)
		return (0);
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}

int	main(void)
{
	int	test;

	test = ft_sqrt(4000000000);
	printf(" %d\n", test);
	test = ft_sqrt(3);
	printf(" %d\n", test);
	test = ft_sqrt(0);
	printf(" %d\n", test);
	test = ft_sqrt(-4);
	printf(" %d\n", test);
	return (0);
}
