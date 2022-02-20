/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:47:32 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/18 14:04:07 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_putchar(int n, char *ini, char *fin);
void	relleno(int n, char *ini, char *fin);
void	update(int i, char *fin, char *ini);
void	check_dgt(int i, int x, char *fin, char *ini);

void	ft_print_combn(int n)
{
	char	ini[10];
	int		i;
	char	fin[10];

	i = n - 1;
	if (n < 10 && n > 0)
	{
		relleno(n, ini, fin);
		ft_putchar(n, ini, fin);
		while (*ini != *fin)
		{
			update(i, fin, ini);
			ft_putchar(n, ini, fin);
		}
	}
}

void	ft_putchar(int n, char *ini, char *fin)
{
	int	x;

	x = 0;
	while (x < n)
	{
		write(1, &ini[x], 1);
		x++;
	}
	if (ini[0] != fin[0])
		write(1, ", ", 2);
}

void	relleno(int n, char *ini, char *fin)
{
	int		x;
	char	max;

	x = 0;
	max = '9';
	while (x < n)
	{
		ini[x] = x + '0';
		x++;
	}
	x = n - 1;
	while (x >= 0)
	{
		fin[x] = max;
		x--;
		max--;
	}
}

void	update(int i, char *fin, char *ini)
{
	int	x;

	x = 0;
	if (ini[i] < fin[i])
		ini[i]++;
	else
		check_dgt(i, x, fin, ini);
}

void	check_dgt(int i, int x, char *fin, char *ini)
{
	int	z;

	z = i - 1;
	while (ini[i] == fin[i])
	{
		if (ini[z] == fin[z])
		{
			z--;
			i--;
		}
		else
		{
			if (*ini != *fin)
				if (x != 1)
					ini[z]++;
			x = 1;
			while (ini[i] == fin[i])
			{
				ini[i] = ini[z] + 1;
				z++;
				i++;
			}
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
}
