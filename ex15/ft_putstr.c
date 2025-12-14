/*
ft_putstr
Directorio de entrega: ex15/
Archivos a entregar: ft_putstr.c
Funciones autorizadas: ft_putchar
• Crea una función que muestre una cadena de caracteres por la salida estándar.
• Este debe ser su prototipo:
     void ft_putstr(char *str);
*/

//#include <unistd.h>
//#include <stdio.h>

void   ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;

	str = "BCN42";
	ft_putstr(str);
	return (0);
}
*/
