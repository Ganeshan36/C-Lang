#include<stdio.h>
int foo1(int a){
    if(a==1)
    printf("1");
    return(a/2)*foo1(a-2);
}
int main(){
    int a=3;
    foo1(a);
}