#include<stdio.h>
int main(){
    int x=100;
    int *a;
    a=&x;
    *a=*a*3;
    printf("%p\n",&a);
    printf("%d",*a);
}