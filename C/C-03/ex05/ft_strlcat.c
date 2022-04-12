/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:39:53 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/02 10:40:05 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		x;
	unsigned int		y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && y < size)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	while (src[y] != '\0')
	{
		y++;
	}
	dest[x] = '\0';
	x = x - size;
	return (x + y);
}

/*#include <stdio.h>

int	main(void)
{
	char			*src = "Hola Mundo";
	char			dest[100] = "Adios";
	unsigned int	size = 3;

	printf("%d, %s", ft_strlcat(dest, src, size), dest);
}*/
