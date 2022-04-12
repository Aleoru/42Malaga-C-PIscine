/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 10:37:50 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/02 10:29:42 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' && s2[x] != '\0') && x < n)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char			s1[] = "hola";
	char			s2[] = "h3lb";
	unsigned int	n = 2;

	if (ft_strncmp(s1, s2, n) == 0)
		printf("Son iguales");
	else
		printf("No son iguales");
}
