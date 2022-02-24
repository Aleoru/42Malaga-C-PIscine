/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 10:20:17 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/22 10:43:49 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_lowercase(""));
}*/