/*
Ejercicio 23:
ft_point.h
Directorio de entrega: ex23/
Archivos a entregar: ft_point.h
Funciones autorizadas: Ninguna
• Crea un archivo ft_point.h que deberá compilar el siguiente main:
#include "ft_point.h"
void set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

int main(void)
{
t_point point;
set_point(&point);
return (0);
}
*/

#ifndef FT_POINT_H
#define FT_POINT_H

typedef	struct s_point
{
int	x;
int	y;
}	t_point;

#endif
