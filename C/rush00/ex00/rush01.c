/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:24:52 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/13 12:32:59 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);
char	linea(int y, int ymax, int x, int xmax);

void	rush(int xmax, int ymax)

{
	int	x;
	int	y;

	x = 1;
	y = 1;
	while (y <= ymax)
	{
		while (x <= xmax)
		{
			ft_putchar(linea(y, ymax, x, xmax));
			x++;
		}
		x = 1;
		ft_putchar('\n');
		y++;
	}
}

char	linea(int y, int ymax, int x, int xmax)
{
	if ((y == 1 && x == 1) || (y == ymax && x == xmax))
		return ('/');
	else if ((y == ymax && x == 1) || (y == 1 && x == xmax))
		return ('\\');
	else if ((y == 1 && y == ymax) || (x != 1 && x != xmax))
	{
		if ((y != 1 && y != ymax) || (x == 1 && x == xmax))
			return (' ');
		else
			return ('*');
	}
	else if ((y != 1 && y != ymax) || (x != 1 && x != xmax))
		return ('*');
	else
		return ('0');
}
