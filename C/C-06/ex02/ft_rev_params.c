/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:23:17 by aoropeza          #+#    #+#             */
/*   Updated: 2022/03/03 16:08:46 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	if (argc > 1)
	{
		argc--;
		while (argc > 0)
		{
			x = 0;
			while (argv[argc][x] != '\0')
			{
				write (1, &argv[argc][x], 1);
				x++;
			}
			write (1, "\n", 1);
			argc--;
		}
	}
	return (0);
}
