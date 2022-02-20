/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:23:08 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/16 17:42:52 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/* #include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 1;
	d = 2;
	printf("%d, %d\n", c, d);
	a = &c;
	b = &d;
	ft_swap(a, b);
	printf("%d, %d", c, d);
} */
