//# **************************************************************************** #
//#                                                                              #
//#                                                         :::      ::::::::    #
//#    ft_foreach.c                                       :+:      :+:    :+:    #
//#                                                     +:+ +:+         +:+      #
//#    By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+         #
//#                                                 +#+#+#+#+#+   +#+            #
//#    Created: 2025/12/18 13:46:26 by javisan2          #+#    #+#              #
//#    Updated: 2025/12/18 13:46:29 by javisan2         ###   ########.fr        #
//#                                                                              #
//# **************************************************************************** #

/*
Ejercicio: 25
ft_foreach
Directorio de entrega: ex25/
Archivos a entregar: ft_foreach.c
Funciones autorizadas: Ninguna

• Crea la función ft_foreach que, para una matriz de enteros dada,
aplica una función a todos los elementos de la matriz.
Esta función se aplicará siguiendo el orden de la matriz.
• Este debe ser el prototipo de la función:
	void ft_foreach(int *tab, int length, void (*f)(int));

• Por ejemplo, la función ft_foreach puede llamarse como sigue para mostrar
todos los enteros de la matriz:
	ft_foreach(tab, 1337, &ft_putnbr);
*/

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_print(int a)
{
	printf ("%d ", a);
}

int	main(void)
{
	int	tab[] = {1, 3, 6, 9, 12};

	printf("La matriz es:\n");
	ft_foreach(tab, 5, &ft_print);

	return (0);
}
*/
