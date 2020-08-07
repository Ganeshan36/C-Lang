////Given  two  sorted  lists  A  and  B,  Create  a  new  sorted  array  with  maximum  possible  length, which alternatively takes elements from both the lists. Let the first element be from list A. ( Do not do sorting after creation of the output array. Pick the elements alternatively such that array is sorted at the end of picking)*/

/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320*/


#include <stdio.h>
void pick(int, int[], int, int[]);
int main()
{
    int s1, s2;
    int arr1[s1], arr2[s2];
    printf("Enter size of array 1: ");
    scanf("%d", &s1);
    printf("Enter values for array 1: ");
    for (int i = 0; i < s1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter size of array 2: ");
    scanf("%d", &s2);
    printf("Enter values for array 2: ");
    for (int i = 0; i < s2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    pick(s1, arr1, s2, arr2);
}

void pick(int s1, int arr1[], int s2, int arr2[])
{
    int c[s1+s2],a1=0,a2=0,f=0;
    c[0]=arr1[0];
    a1++;
    
    while(1){
        while(1){
            if (arr2[a2]>c[f]){
                f++;
                c[f]=arr2[a2];
                a2++;
                break;
            }
            else
                a2++;
        }
        while(1){
            if (arr1[a1]>c[f]){
                f++;
                c[f]=arr1[a1];
                a1++;
                break;
            }
            else
                a1++;
        }
        if(a1>=s1 || a2>=s2){
            break;        
        }
    }
    for(int i =0;i<f;i++)
        printf("%d ",c[i]);
}