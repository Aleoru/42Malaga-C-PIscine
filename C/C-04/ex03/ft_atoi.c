/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 16:46:37 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/03 11:14:17 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	x;
	int	sign;
	int	num;

	x = 0;
	sign = 1;
	while (str[x] != '\0' && str[x] <= 32)
	{
		x++;
	}
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = sign * -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		num = (num * 10) + str[x] - '0';
		x++;
	}
	return (num * sign);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("---+--+1234ab567"));
}*/
