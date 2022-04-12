/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 10:50:24 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/28 16:27:16 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

/* #include <stdio.h>

int	main(void)
{
	char	str[] = "hola, que tal";
	int		strlen;

	strlen = ft_strlen(str);
	printf("El número de caracteres en el string es: %d", strlen);
} */
