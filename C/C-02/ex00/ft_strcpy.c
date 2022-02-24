/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:27:31 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/21 13:00:40 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{	
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char src[] = {"hola"};
	char dest[] = {"adios"};
	
	ft_strcpy(dest, src);
	printf("%s", dest);
} */
