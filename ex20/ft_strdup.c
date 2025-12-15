/*
ft_strdup
Directorio de entrega: ex20/
Archivos a entregar: ft_strdup.c
Funciones autorizadas: malloc
• Reproduce el comportamiento de la función strdup (man strdup).
• Este debe ser su prototipo:
  char *ft_strdup(char *src);
*/
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (src[len])
		len++;

	dest = malloc((len + 1) * sizeof(char)); // Reservar memoria (+1 para '\0')
	if (dest == NULL)
		return NULL;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	src[] = "Hello42";
	char	*dest;

	dest = ft_strdup(src);
	printf("La 1ª es: %s \n", src);
	printf("Mine es: %s \n", dest);
	printf("Theirs es: %s \n", strdup(src));
	free (dest);
	return (0);
}
