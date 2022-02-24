/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:55:16 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/21 13:55:58 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((src[x] != '\0') && (x < n))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/* #include <stdio.h>

int main(void)
{
	char			src[] = {"hola"};
	char			dest[] = {"adios"};
	unsigned int	n;

	n = 8;
	ft_strncpy(dest, src, n);
	printf("%s", dest);
} */
