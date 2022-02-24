/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoropeza <aoropeza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:16:02 by aoropeza          #+#    #+#             */
/*   Updated: 2022/02/20 20:15:55 by aoropeza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	CanResolve(char *colup, char *coldown, char *rowright, char *rowleft);

int	arguments(char *numarray)
{
	char	colup[4];
	char	coldown[4];
	char	rowleft[4];
	char	rowright[4];
	int 	posarray;
	int 	posptr;
	char	ress[4];

	posarray = 0;
	posptr = 0;
	while (posarray < 4)
	{
		colup[posarray] = numarray[posptr];
		//write(1, &colup[posarray], 1);
		posarray++;
		posptr++;
	}
    posarray = 0;
	//write(1, " ", 1);
	while (posarray < 4)
	{
		coldown[posarray] = numarray[posptr];
		//write(1, &coldown[posarray], 1);
		posarray++;
		posptr++;
	}
	posarray = 0;
	//write(1, " ", 1);
	while (posarray < 4)
	{
		rowleft[posarray] = numarray[posptr];
		//write(1, &rowleft[posarray], 1);
		posarray++;
		posptr++;
		}
	posarray = 0;
	//write(1, " ", 1);
	while (posarray < 4)
	{
		rowright[posarray] = numarray[posptr];
		//write(1, &rowright[posarray], 1);
		posarray++;
		posptr++;
		}
	if (CanResolve(colup, coldown, rowleft, rowright) == 0)
		return (0);
	else
		return (2);
	//write(1, "\n", 1);
	//posarray = 0;
	//CanResolve(colup, coldown, rowleft, rowright);
	/* while(posarray < 4)
	{
		write(1, &ress[posarray], 1);
		posarray++;
	} */
}

int	check(char *numarray)
{
	int	posnum;

	posnum = 0;
	while (posnum < 17)
	{
		if ((numarray[posnum] > '0') && (numarray[posnum] < '5'))
			posnum++;
		else
			break;
	}
	if (posnum == 16)
		return (0);
	else
		return (1);
}

int	CanResolve(char *colup, char *coldown, char *rowleft, char *rowright)
{
	int		posarray;
	int 	ok;
	char	res[4];
	
	posarray = 0;
	ok = 0;
	while (posarray < 4)
	{
		res[posarray] = colup[posarray] + (coldown[posarray] - '0');
		if ((res[posarray] <= '5') && (res[posarray] >= '3'))
		{
			ok++;
			posarray++;
		}
		else
			break;
	}
	if (ok == 4)	
	{	
		while (posarray < 4)
		{
			res[posarray] = rowleft[posarray] + (rowright[posarray] - '0');
			if ((res[posarray] <= '5') && (res[posarray] >= '3'))
			{
				ok++;
				posarray++;
			}
			else
				break;
		}
		if (ok == 8)
			return (0);
		else
			return (2);
	}
	else
		return (2);
}
