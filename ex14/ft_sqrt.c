/*
ft_sqrt
Directorio de entrega: ex14/ Archivos a entregar: ft_sqrt.c Funciones autorizadas: Ninguna
• Crea una función que devuelva la raíz cuadrada de un número (si existe), o 0 si la raíz cuadrada es un 
número irracional.
• Este debe ser su prototipo:
• Tu función debe devolver su resultado en menos de dos segundos.
*/

int ft_sqrt(int nb)
{
    int i;
    
    i = 0;
    
    while (i <= nb / 2)
    {
        if (i * i == nb)
            return (i);
        i++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
    int nb;
    int i;
    
    nb = 25;
    i = ft_sqrt(nb);
    printf("La raíz cuadrada de %d es %d\n", nb, i);
    return 0;
}
