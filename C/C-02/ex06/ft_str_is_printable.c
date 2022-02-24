/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:38:26 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/23 14:32:01 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] > 31) && (str[x] < 127))
			x++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_printable("!2 aV3"));
}*/
