/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:26:39 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/11 14:08:30 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i, int ab);

int	main(void)
{
	int i;
	int a;
	int b;
	int ab;

	a = 12345;
	b = 5;	
	i = b;
	ab = a;
	while (i >= 0)
	{
		ab = ab % 10;
		ft_putchar(i, ab);
		ab = ab / 10;
		i--;
	} 

}

void	ft_putchar(int i, int ab)
{
	char c[i];

	i--;
	c[i] = '0' + ab;
	write(1, &c[i], 1);
}