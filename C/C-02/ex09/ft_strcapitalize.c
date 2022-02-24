/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:42:00 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/23 17:11:21 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	while (str[x] != '\0')
	{
		y = x - 1;
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if ((x == 0) || (str[y] == ' '))
				str[x] -= 32;
		}
		else if ((str[x] >= 'A') && (str[x] <= 'Z'))
		{
			if ((x != 0) && (str[y] != ' '))
				str[x] = str[x] + 32;
		}
		x++;
	}
	return (str);
}

/*#include <unistd.h>

int	main(void)
{
	char	str[] = "hOLa, qUE tAL 42eSTaS?";
	int		x = 0;

	ft_strcapitalize(str);
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}*/
