/*Ganeshan M
AM.EN.U4CSE19320
S2 CSE-D
 Array*/
#include<stdio.h>
#define s 100
int main(){
    int a[s],n,sum=0,i;
    printf("This is a program for addiding n numbers.\nEnter a limit n");
    scanf("%d",&n);
    printf("Enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("Sum of elements:%d\n",sum);
    for(i=0;i<n;i++){
        a[i]=a[i]+1;
    }
    printf("Printing the array: ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
printf("\n");
return 0;
}