/*Ganeshan M
AM.EN.U4CSE19320
Date:12 April 20
S2 CSE-D
Inserting elements in  Array*/
#include <stdio.h>
int insertion(int[], int, int, int);
#define size 100
int main()
{
    int A[size], n, i, ele,pos;
    printf("This is the program for inserting an element in an array\n");
    printf("Enter the limit ");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the element to be inserted ");
    scanf("%d", &ele);
    printf("Enter the position to insert ");
    scanf("%d", &pos);
    insertion(A, n, pos,ele);
     printf("\n");
}
int insertion(int Arr[], int l, int position, int Value)
{
    for(int i = l-1; i>=position - 1;i--)
        Arr[i+1] = Arr[i]; 
    Arr[position-1]=Value;
    l=l+1;
    printf("Updated Array: ");
    for (int i =0; i<l;i++)
        printf("%d ",Arr[i]);
    return (l);
   
}
