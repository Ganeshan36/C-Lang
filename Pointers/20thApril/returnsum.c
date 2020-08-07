#include<stdio.h>
void prod_(int ,int ,int *,int *,int *);
int main() {
    int x,y;
    int sum,diff,prod;
    printf("Enter the NO:");
    scanf("%d%d",&x,&y);
    prod_(x,y,&sum,&diff,&prod);
    printf("\nSum:%d\ndiff :%d\nProducr :%d\n",sum,diff,prod);

    return 0;
}
void prod_(int a,int b,int *sum,int *diff,int *product){
    *sum=a+b;
    *product=a*b;
    *diff=a-b;
}