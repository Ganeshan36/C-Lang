#include<stdio.h>
int odd_eve(int);
int main(){
    int n;
    printf("Input any number:");
    scanf("%d",&n);
    printf("%d",odd_eve(n));
}
int odd_eve(int a){
    if(a%2==0)
    printf("Even  \n");
    else
    printf("Odd\n");
}