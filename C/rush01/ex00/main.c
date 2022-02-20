/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 11:10:40 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/19 18:36:23 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;
	//char	array[1];
	// int num;

	i = 1;
	x = i - 1;
	if (argc == 17)
	{
		while (i < 17)
		{
			array[0] = *argv[i];
			write(1, &array[0], 1);
			i++;
		} 
	}
	else if (argc > 17)
	{
		printf("Muchos argumentos.\n");
	}
	else
		printf("Argumentos insuficientes");
}
