#include <stdio.h>
#define s 3 // s is the Size of the matrix
int main()
{
    int A[s][s],B[s][s],C[s][s];
    
    int row, col, i, sum;

    printf("Enter elements in matrix A of size %dx%d: \n", s, s);
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }


    printf("\nEnter elements in matrix B of size %dx%d: \n", s, s);
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            scanf("%d", &B[row][col]);
        }
    }
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            sum = 0;
            for(i=0; i<s; i++)
            {
                sum += A[row][i] * B[i][col];
            }

            C[row][col] = sum;
        }
    }
//displaying the product of the matrix
    printf("\nProduct of matrix A * B = \n");
    for(row=0; row<s; row++)
    {
        for(col=0; col<s; col++)
        {
            printf("%d  ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}