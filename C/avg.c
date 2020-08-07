#include<stdio.h>
int main(){
    int a[5]={78,67,92,83,88};
    int s=0;
    int i;
    for(i=0;i<5;i++)
    printf("\ta[%d]\t%d",i,a[i]);
    printf("\n\n");
    for(i=0;i<5;i++)
    s=s+a[i];
    printf("Avg is %d",s/5);

}