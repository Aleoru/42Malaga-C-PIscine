/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:01:02 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/15 12:06:07 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(int d);

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

void	ft_putchar(int d)
{
	char	c;

	c = d / 10 + '0';
	write(1, &c, 1);
	c = d % 10 + '0';
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_print_comb2();
} */
