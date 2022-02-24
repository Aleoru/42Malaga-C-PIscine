/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:15:42 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/22 10:15:16 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str);
int	ft_strlen(char *str);

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= '0') && (str[x] <= '9'))
			x++;
		else
			return (0);
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("035831"));
} */
