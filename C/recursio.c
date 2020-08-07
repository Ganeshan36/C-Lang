#include<stdio.h>
int main(){
    int i=10;
    printf("%ls",&i);
    recur(10);
}
int recur(int n){
    if(n==0){
        printf("Blast off");
    }
    else
    {
        printf("Time is %d\n",n);
        recur(n-1);
    }
}