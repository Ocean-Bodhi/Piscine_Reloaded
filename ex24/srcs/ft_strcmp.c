/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javisan2 <javisan2@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:02:33 by javisan2          #+#    #+#             */
/*   Updated: 2025/12/18 14:02:36 by javisan2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int	r;

	//s1 = "Hello42";
	//s2 = "Hello";
	s1 = "";
	s2 = "";
	r = ft_strcmp(s1, s2);
	printf("el resultado mío es %d\n", r);
	printf("el de ellos es %d\n", strcmp(s1, s2));
	return (0);
}
*/
