/*
Ejercicio 18 : ft_print_params
Ejercicio: 18
ft_print_params
Archivos a entregar: ft_print_params.c
 Directorio de entrega: ex18/ Funciones autorizadas: ft_putchar
• Esto se trata de un programa, así que deberías tener una función main en tu archivo .c.
• Crea un programa que muestre sus argumentos dados.
• Ejemplo:
$>./a.out test1 test2 test3
test1
test2
test3
$>
*/

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
		j = 0;
	}
	return (0);
}
