/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combtable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:51:55 by dagarci2          #+#    #+#             */
/*   Updated: 2022/02/20 17:59:39 by dagarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdlib.h>

int main (void)
{

//void  declare_arrays(void)
//{
char *comb41;
char *comb14;
char **comb22;
char **comb13;
char **comb31;
char **comb23;
char **comb32;
char **comb12;
char **comb21;

//fill_arrays;
//}

//void fill_arrays()
//{
	
comb41 =(char*)malloc(4*sizeof(char));
comb41[0] = '1';
comb41[1] = '2';
comb41[2] = '3';
comb41[3] = '4';

comb14 =(char*)malloc(4*sizeof(char));
comb14[0] = '4';
comb14[1] = '3';
comb14[2] = '2';
comb14[3] = '1';

//empezamos con las combinaciones de matrices
comb22 =(char**)malloc(6*sizeof(char)); 

int j22= 0;
while (j22 < 6)
{
	comb22[j22] = (char*)malloc(4*sizeof(char));
j22++;
}
comb22[0] = "1423";
comb22[1] = "2413";
comb22[2] = "2143";
comb22[3] = "3412";
comb22[4] = "3241";
comb22[5] = "3142";

comb13 =(char*)malloc(3*sizeof(char));

int j13= 0;
while (j13 < 3)
{
	comb13[j13] = (char*)malloc(4*sizeof(char));
j13++;
}
comb13[0] = "4312";
comb13[1] = "4231";
comb13[2] = "4132";


comb31 =(char*)malloc(3*sizeof(char));

int j31= 0;
while (j31 < 3)
{
	comb31[j31] = (char*)malloc(4*sizeof(char));
j31++;
}
comb31[0] = "3421";
comb31[1] = "2431";
comb31[2] = "1432";


comb23 =(char*)malloc(3*sizeof(char));

int j23= 0;
while (j23 < 3)
{
	comb23[j23] = (char*)malloc(4*sizeof(char));
j23++;
}
comb23[0] = "2134";
comb23[1] = "1324";
comb23[2] = "2314";

comb32 =(char*)malloc(3*sizeof(char));

int j32= 0;
while (j32 < 3)
{
	comb32[j32] = (char*)malloc(4*sizeof(char));
j32++;
}
comb32[0] = "4312";
comb32[1] = "4231";
comb32[2] = "4132";

comb12 =(char*)malloc(2*sizeof(char));

int j12= 0;
while (j12 < 2)
{
	comb12[j12] = (char*)malloc(4*sizeof(char));
j12++;
}
comb12[0] = "4213";
comb12[1] = "4123";

comb21 =(char*)malloc(2*sizeof(char));

int j21= 0;
while (j21 < 2)
{
	comb21[j21] = (char*)malloc(4*sizeof(char));
j21++;
}
comb21[0] = "3124";
comb21[1] = "3214";


//}
	
int i;
i=0;
while (i<4)
{

write(1, &comb22[5][i],1);
i++;
}

}
