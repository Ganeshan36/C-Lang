#include<stdio.h>
int main(){
    int num =10;
    int *p;
    p=&num;
    printf(" Address of variable num is :%p",p);
    return 0;
}