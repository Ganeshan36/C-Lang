#include<stdio.h>
long int factor(int n){
    int f=1;
    {
        for(int i=1;i<n;i++)
        f=f*i;
        printf("%d",f);
    }
}
long int recursion(int n){
    if (n==1){
        return 1;
    }
    else
    return(recursion(n-1)*n);
}
int main(void){
    int hm =0,i;
    printf("I want a table of factorial upto n ");
    scanf("%d",&hm);
    printf("\n Factorial\n");
    for(i=1;i<=hm;i++)
    printf("\n%d\t%ld\n",i,factor(i));
    printf("\n\n");

}