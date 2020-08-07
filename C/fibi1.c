#include<stdio.h>
int main(){
    int i,n,t=0,t2=1,nt;
    printf("Enter the No of Terms");
    scanf("%d",&n);
    printf("fibonacci series is:");
    for(i=1;i<=n;++i){
        printf("%d, ",t);
        nt=t+t2;
        t=t2;
        t2= nt;

    }
}