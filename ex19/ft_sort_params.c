/*
Ejercicio: 19
ft_sort_params
Archivos a entregar: ft_sort_params.c
Directorio de entrega: ex19/
Funciones autorizadas: ft_putchar
• Esto se trata de un programa, así que deberías tener una función main 
en tu archivo .c.
• Crea un programa que muestre sus argumentos dados ordenados en orden ascii.
• Debe mostrar todos los argumentos, excepto argv[0].
• Todos los argumentos deberán estar separados con un salto de línea.
*/

void	putchar(char c);

void	ft_swap(char **arg_a, char **arg_b)
{
	char	*tmp;

	tmp = *arg_a;
	*arg_a = *arg_b;
	*arg_b = tmp;

}

int	ft_strcmp(char *arg_a, char *arg_b)
{
	int j;

	j = 0;
	while (arg_a[j] && arg_b[j])
	{
		if (arg_a[j] != arg_b[j])
		{
			return (arg_a[j] - arg_b[j]);
		}
		j++;
	}
	return (arg_a[j] - arg_b[j]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	result;

	i = 1;
	j = 0;
	while (i < argc - 1)
	{
		result = ft_strcmp(argv[i], argv[i + 1]);
		if (result <= 0) //el 1er arg es menor o = al 2º
			i++;
		if (result > 0)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
	}
	i = 1;
	while (i < argc)
	{
		while(argv[i][j])
		{
			putchar(argv[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
