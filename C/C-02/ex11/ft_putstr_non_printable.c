/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:52:51 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/24 11:34:59 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	int		x;
	char	*hex;
	char	c;

	x = 0;
	hex = "0123456789abcdef";
	while (str[x] != '\0')
	{
		if ((str[x] > 31) && (str[x] < 127))
			write(1, &str[x], 1);
		else
		{
			write(1, "\\", 1);
			c = hex[str[x] / 16];
			write(1, &c, 1);
			c = hex[str[x] % 16];
			write(1, &c, 1);
		}
		x++;
	}
}

/* int	main(void)
{
	ft_putstr_non_printable("Hola que\ntal");
}*/
