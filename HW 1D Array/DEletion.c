/*
Ganeshan M
Date:12 April 20
S2 CSE D
Roll No:AM.EN.U4CSE19320
Deletion PRogram
*/
#include <stdio.h>
#define size 100
int delete (int[], int, int);
int main()
{
    int A[size], n, i, ele, pos;
    printf("This is the program for inserting an element in an array\n");
    printf("Enter the limit ");
    scanf("%d", &n);
    printf("Enter the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the position of element to delete: ");
    scanf("%d", &pos);
    delete (A, n, pos);
    printf("\n");
}
int delete (int arr[], int l, int pos)
{
    for (int i = pos; i<l;i++)
        arr[i-1] = arr[i];
    l = l - 1;
    printf("Updated array: ");
    for (int i = 0; i < l; i++)
        printf("%d ", arr[i]);
    return (l);
}