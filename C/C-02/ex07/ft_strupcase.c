/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:51:03 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/23 14:30:42 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}

/* #include <unistd.h>

int	main(void)
{
	int		x = 0;
	char	str[] = "hola";

	ft_strupcase(str);

	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
} */
