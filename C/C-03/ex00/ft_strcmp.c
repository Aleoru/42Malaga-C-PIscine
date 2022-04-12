/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 12:26:16 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/01 13:15:25 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
			x++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "hola";
	char	s2[] = "hola";

	if (ft_strcmp(s1, s2) == 0)
		printf("Son iguales");
	else
		printf("No son iguales");
}*/
