/*
Directorio de entrega: ex16/ Archivos a entregar: ft_strlen.c Funciones autorizadas: Ninguna
• Reproduce el comportamiento de la función strlen (man strlen). • Este debe ser su prototipo:
 int ft_strlen(char *str);
Ejercicio: 16
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char 	*a;

	a = "BCN42";
	printf ("La longitud de %s es %d\n", a, ft_strlen(a));
	return (0);
}
*/
