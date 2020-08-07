
//Read a value k from the use rand using k do k leftr otation and right rotation depending on the user choice Left or Right,print the rotated value.*/
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320*/

#include <stdio.h>
#define SIZE 5 
void displayArray(int arr[]);
void leftrotate(int arr[]);
void rightrotate(int arr[]);
int main() {
    int i, N;
    int ch;
    int arr[SIZE];
    printf("\n1.Left Rotation.\n 2.Right Rotation.");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        leftrotate(arr);
        displayArray(arr);
        break;
    case 2:
        rightrotate(arr);
        displayArray(arr);
        break;
    default:
        break;
    }

    printf("Enter 5 elements array: ");
    for(i=0; i<SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of times to left rotate: ");
    scanf("%d", &N);
    
    N = N % SIZE;
  printf("Array before rotationn: ");
    displayArray(arr);


    for(i=1; i<=N; i++)
    {
        leftrotate(arr);
    }
    printf("\n\nArray after rotation\n");
    displayArray(arr);

    return 0;
}
void rightrotate(int arr[])
{
    int i, last;

    last = arr[SIZE - 1];

    for(i=SIZE-1; i>0; i--)
    {
    
        arr[i] = arr[i - 1];
    }

    
    arr[0] = last;
}

void leftrotate(int arr[])
{
    int i, first;

    
    first = arr[0];

    for(i=0; i<SIZE-1; i++)
    {
       
        arr[i] = arr[i + 1];
    }

    
    arr[SIZE-1] = first;
}
void displayArray(int arr[])
{
    int i;

    for(i=0; i<SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}