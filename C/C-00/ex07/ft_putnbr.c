/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:11:50 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/18 10:33:01 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(int nb_a, int nb_dgt, int nb, int nb_neg);

void	ft_putnbr(int nb)
{
	int	nb_a;
	int	nb_dgt;
	int	nb_neg;

	nb_dgt = 1;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb_neg = nb * -1;
		nb_a = nb_neg;
	}
	else
		nb_a = nb;
	while (nb_a > 10)
	{
		nb_a = nb_a / 10;
		nb_dgt++;
	}
	nb_a = nb;
	ft_putchar(nb_a, nb_dgt, nb, nb_neg);
}

void	ft_putchar(int nb_a, int nb_dgt, int nb, int nb_neg)
{
	char	c;
	int		x;

	if (nb < 0)
		write(1, "-", 1);
	while (nb_dgt > 0)
	{
		nb_dgt--;
		x = nb_dgt;
		if (nb < 0)
			nb_a = nb_neg;
		else
			nb_a = nb;
		while (x > 0)
		{
			nb_a = nb_a / 10;
			x--;
		}
		c = nb_a % 10 + '0';
		write(1, &c, 1);
	}	
}

/* int	main(void)
{
	ft_putnbr(-2147483648);
} */
