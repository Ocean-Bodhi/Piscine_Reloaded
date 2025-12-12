int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb > 0)
	{
		while (nb > 1)
		{
			a = a * (nb - 1);
			--nb;
		 }
		return(a);
	}
	return(0);
}

#include <stdio.h>

int	main(void)
{
	int	nb;
	int	resultado;

	nb = 0;
	resultado = ft_iterative_factorial(nb);
	printf("El resultado es %d", resultado);
	return(0);
}
