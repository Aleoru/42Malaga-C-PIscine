/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:03:28 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/20 10:13:29 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int check;
	int	aux;
	int	x;
	int	y;

	y = 0;
	while (y < size)
	{
		x = 0;
		check = tab[y];
		while (x < size)
		{
			if (check < tab[x])
			{
				aux = tab[x];
				tab[x] = check;
				tab[y] = aux;
				check = tab[y];
				x = 0;
			}
			else
				x++;
		}
		y++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	tab[] = {7, 1, 2, 5, 6, 2, 5};
	int	size;
	int i;

	size = 7;
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
} */
