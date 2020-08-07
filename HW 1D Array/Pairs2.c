
/*
Ganeshan M
S2 CSE D
Roll No:AM.EN.U4CSE19320
Prniting ht Pairs
Date:12 April 20
*/

#include <stdio.h>
#define m 10
#define n 10
int main()
{
	int array1[]={1,2,3,4,5}, array2[]={6,7,8,9,10};
	int j = 0, i = 0;
	while (i < m && j < n)
	{
		printf("Array1[%d]=%d, Array2[%d]=%d\n", i, array1[i], j, array2[j]);
		i++;
		j++;
	}
}