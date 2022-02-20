/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:44:20 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/17 10:47:51 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

/* #include <stdio.h>

int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 15;
	d = 2;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d", c, d);
} */
