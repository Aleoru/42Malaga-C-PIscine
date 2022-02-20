/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:34:20 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/17 13:20:36 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	x;
	int	y;

	x = 0;
	y = size - 1;
	while (x < y)
	{
		aux = tab[x];
		tab[x] = tab[y];
		tab[y] = aux;
		x++;
		y--;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	tab[3];
	int	size;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	size = 3;
	printf("%d%d%d\n", tab[0], tab[1], tab[2]);
	ft_rev_int_tab(tab, size);
	printf("%d%d%d", tab[0], tab[1], tab[2]);
} */
