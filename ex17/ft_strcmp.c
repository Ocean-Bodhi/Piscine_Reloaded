/*
ft_strcmp
Directorio de entrega: ex17/ 
Archivos a entregar: ft_strcmp.c
Funciones autorizadas: Ninguna
• Reproduce el comportamiento de la función strcmp (man strcmp).
• Este debe ser su prototipo:
 int ft_strcmp(char *s1, char *s2);
Ejercicio: 17
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i= 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] !=  s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	*b;

	a = "";
	b = "";
	printf("el resultado mío es %d\n", ft_strcmp(a, b));
	printf("el de ellos es %d\n", strcmp(a, b));
	return (0);
}
*/
