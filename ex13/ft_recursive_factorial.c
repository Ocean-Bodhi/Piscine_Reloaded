int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int 	n;

	//n = 5;
	//n = 0;
	//n = 1;
	n = -1;
	printf("El factorial de %d es %d\n", n, ft_recursive_factorial(n));
	return (0);
}
*/
