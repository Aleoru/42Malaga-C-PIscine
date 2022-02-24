/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:32:50 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/23 14:39:40 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

/* #include <unistd.h>

int	main(void)
{
	int		x = 0;
	char	str[] = "HolA";

	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}*/
