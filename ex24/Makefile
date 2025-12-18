# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 13:46:26 by javisan2          #+#    #+#              #
#    Updated: 2025/12/18 13:46:29 by javisan2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile
#Directorio de entrega: ex24/
#Archivos a entregar: Makefile
#Funciones autorizadas: Ninguna
#• Crea el Makefile que compile tu libft.a.
#• El Makefile obtendrá sus archivos fuente del directorio “srcs”.
#• El Makefile obtendrá sus archivos de encabezado del directorio “includes”.
#• La lib estará en la raíz del ejercicio.
#• El Makefile también debe implementar las reglas siguientes: clean, fclean y re
#además de all.
#• fclean hace lo equivalente a un make clean y también borra el binario creado
#durante el make. re hace lo equivalente a un make fclean seguido de un make.
#• Solo recogeremos tu Makefile y lo probaremos con nuestros archivos. Para este ejerci-
#cio, solo se manejarán las siguientes 5 funciones obligatorias de tu lib: (ft_putchar,
#ft_putstr, ft_strcmp, ft_strlen y ft_swap).
#¡Cuidado con los wildcards!


TARGET = libft.a

# directories
INC_DIR = ./includes
SRC_DIR = ./srcs/

# Source files and object files
SRC  = $(SRC_DIR)ft_putchar.c \
	$(SRC_DIR)ft_putstr.c \
	$(SRC_DIR)ft_strcmp.c \
	$(SRC_DIR)ft_strlen.c \
	$(SRC_DIR)ft_swap.c
	
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I $(INC_DIR)

# crear libreria estatica:
all: $(TARGET)
$(TARGET) : $(OBJ)
	ar rc $(TARGET) $(OBJ)

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	cc -c $(CFLAGS) $< -o $@


.PHONY: clean fclean re all

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all
