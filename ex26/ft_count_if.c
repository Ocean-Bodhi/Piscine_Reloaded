/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    ft_count_if.c                                      :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2025/12/18 13:46:26 by javisan2          #+#    #+#              */
/*    Updated: 2025/12/18 13:46:29 by javisan2         ###   ########.fr        */
/*                                                                              */
/* **************************************************************************** */

/*
Ejercicio 26
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

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}
