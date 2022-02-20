/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:11:50 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/15 17:13:31 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(int x, int nb_a, int nb_dgt);

void	ft_putnbr(int nb)
{
	int	nb_a;
	int	nb_dgt;
	int	x;

	if (nb < 0)
		nb = nb * -1;
	else
	nb_dgt = 1;
	nb_a = nb;
	while (nb_a > 10)
	{
		nb_a = nb_a / 10;
		nb_dgt++;
	}
	nb_a = nb;
	x = nb_dgt;
	ft_putchar(x, nb_a, nb_dgt);
}

void	ft_putchar(int x, int nb_a, int nb_dgt)
{
	char	c[x];

	x--;
	while (x >= 0)
	{
		c[x] = nb_a % 10 + '0';
		x--;
		nb_a = nb_a / 10;
	}
	while (x < nb_dgt)
	{
		write(1, &c[x], 1);
		x++;
	}	
}

int	main(void)
{
	ft_putnbr(-432);
}
