/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:02:51 by javisan2          #+#    #+#             */
/*   Updated: 2025/12/18 14:02:55 by javisan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	len;

	len = 0;
	while (c[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("La longitud de 'Hello42' es %d", ft_strlen("Hello42"));
	return (0);
}
*/
