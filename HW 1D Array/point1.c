/*
Ganeshan M
Date:12 April 20
S2 CSE D
Roll No:AM.EN.U4CSE19320
*/
#include<stdio.h>
int main(){
    int *ptr;
    double *ptr1;
    char *ptr2;
    float *ptr3;
    int x=5;
    ptr=&x;
    printf("%d\n",*ptr*3);
     printf("%ls,%ls\n",*&ptr,&*ptr);
}