/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:10:40 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/20 20:07:37 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	arguments(char *numarray);
int	check(char *numarray);

int	main(int argc, char **argv)
{
	int		posnum;
	int		posarg;
	char	numarray[16];

	posarg = 1;
	posnum = 0;
	if (argc == 17)
	{
		while (posarg < 17)
		{
			numarray[posnum] = *argv[posarg];
			// write(1, &numarray[posnum], 1);
			posarg++;
			posnum++;
		}
		if (check(numarray) == 0)
		{
			if(arguments(numarray) == 0)
				write(1, "Todo ok", 7);
			else if(arguments(numarray) == 2)
				write(1, "No se puede resolver", 20);
			// arguments(numarray);
		}
		else if (check(numarray) == 1)
			write(1, "Parametros incorrectos", 22);

	}
	else if (argc > 17)
	{
		write(1, "Muchos argumentos.", 18);
	}
	else
		write(1, "Argumentos insuficientes.", 25);
}
