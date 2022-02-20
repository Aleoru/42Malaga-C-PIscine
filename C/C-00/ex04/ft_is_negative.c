/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:19:58 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/15 11:55:47 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	c;

	c = 'N';
	if (n >= 0)
		c = 'P';
	write(1, &c, 1);
}

/* int	main(void)
{
	ft_is_negative(0);
} */
