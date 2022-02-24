/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:12:16 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/24 11:36:15 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while ((src[x] != '\0'))
	{
		if (x < size)
			dest[x] = src[x];
		else if (x == size)
			dest[x] = '\0';
		x++;
	}
	return (x);
}

/*#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char	src[] = "Hello there, General Kenobi";

	if (argc == 2)
	{
		// printf("%lu\n", strlcpy(argv[1], str, 12));
		printf("%u\n", ft_strlcpy(argv[1], src, 12));
		printf("%s\n", argv[1]);
		printf("%s\n", src);
	}
	else if (argc < 2)
		printf("Por favor, introduzca algún parámetro.");
}*/
