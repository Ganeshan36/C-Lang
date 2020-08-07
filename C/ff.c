#include<stdio.h>
int rec(int n){
    if (n>0)
    return n*rec(n-1);
    else
    { 
        return 1;

    }
    
}
int main(){
    int n,a=0;
    scanf("%d",&n);
    a=rec(n);
    printf("%d",a);
}