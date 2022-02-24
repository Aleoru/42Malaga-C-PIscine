/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:57:22 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/22 10:18:44 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
int	ft_strlen(char *str);

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A') && (str[x] <= 'Z'))
			x++;
		else if ((str[x] > 'a') && (str[x] < 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_alpha("Hola"));
}*/
