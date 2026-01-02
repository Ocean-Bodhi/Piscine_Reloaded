/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 13:59:38 by javisan2          #+#    #+#             */
/*   Updated: 2026/01/02 13:59:58 by javisan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Ejercicio: 26
ft_count_if
Directorio de entrega: ex26/
Archivos a entregar: ft_count_if.c
Funciones autorizadas: Ninguna
• Crea una función ft_count_if que devuelva el número de elementos de la matriz
que devuelven 1 al pasarlos por la función f.
• Este debe ser el prototipo de la función:
int ft_count_if(char **tab, int (*f)(char*));
• La matriz estará delimitada por 0.
*/

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int	esta_vacia(char *str)
{
	int	n;

	n = 0;
	if (str[0] == '\0')
		n++;
	return (n);
}

int	main(void)
{
	int	n;
	char *tab[] = {"Hello", "", "Popi", 0};

	n = ft_count_if(tab, esta_vacia);
	printf ("El numero de palabras vacias es %d\n", n);
	return (0);
}
*/
