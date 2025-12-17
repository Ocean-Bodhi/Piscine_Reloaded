/*
ft_range
Directorio de entrega: ex21/
Archivos a entregar: ft_range.c
Funciones autorizadas: malloc
• Crea una función ft_range que devuelva una matriz de enteros. 
Este array de enteros debe contener todos los valores entre min y max.
• Min incluido - max excluido.
• Este debe ser su prototipo:
 int *ft_range(int min, int max);
• Si el valor min es mayor o igual al valor max,
debe devolverse un puntero nulo.
*/

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL); 
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	main(void)
{
	int i = 0;
	int *arr;
	int	max = 9;
	int	min = -9;
	int	len = max - min;
	arr = ft_range(min, max);
	while (i < len)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
	free (arr);
	return (0);
}
*/
