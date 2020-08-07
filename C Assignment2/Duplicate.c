/*Ganeshan M
AM.EN.U4CSE19320
S2 CSE-D
Removing the DUplicate elements in  Array*/
#include<stdio.h>
int removeduplicate(int [],int);
void main()
{
    int arr[20], i, j, k, limit;
    
    printf("\nEnter array limit : ");
    scanf("%d", &limit);
    
    printf("Enter Numbers : \n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &arr[i]);
    }
    removeduplicate(arr,limit);
}
int removeduplicate(int arr[],int limit){
    int i=0,j=0,k=0;
    printf("\nArray with Unique list  : ");
    for (i = 0; i < limit; i++)
    {
        for (j = i + 1; j < limit;)
        {
            if (arr[j] == arr[i])
            {
                for (k = j; k < limit; k++)
                {
                    arr[k] = arr[k + 1];
                }
                limit--;
            }
            else
            {
                j++;
            }
        }
    }
    
    for (i = 0; i < limit; i++) {
        printf("%d ", arr[i]);
    }
    
}