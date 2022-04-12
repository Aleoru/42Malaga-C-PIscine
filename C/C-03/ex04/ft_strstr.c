/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:59:37 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/01 14:42:59 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *tofind);
int		ft_strcmp(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] != '\0' && str[x + y] == to_find[y])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hola Mundo";
	char	*to_find = "Mundo";

	printf("%s\n", ft_strstr(str, to_find));
}*/
