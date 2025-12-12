#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
        printf("1º esto es a: %d \n", a);
        printf("1º esto es b: %d \n", b);
	printf("Before ft_swap: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", &a, a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", &b, b);
	ft_swap(&a, &b);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", &a, a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", &b, b);
	printf("Ahora esto es a: %d \n", a);
	printf("Ahora esto es b: %d \n", b);
	return (0);
}

/*
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	// This instruction exchanges the values to which pointers are pointing
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	v1 = 15;
	int	v2 = 35;
	int	*a = &v1;
	int	*b = &v2;
	
	printf("Before ft_swap: \n");
	printf("Pointer 'a' points to adress %p that has the value %d stored\n", a, *a);
	printf("Pointer 'b' points to adress %p that has the value %d stored\n", b, *b);
	ft_swap(a, b);
	printf("\n");
	printf("After ft_swap: \n");
	printf("Pointer 'a' remains pointing to adress %p, but now that has the value %d stored\n", a, *a);
	printf("Pointer 'b' remains pointing to adress %p, but now that has the value %d stored\n", b, *b);
}
*/
