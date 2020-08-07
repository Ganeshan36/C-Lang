#include<stdio.h>
int main() {
    int a[10],*p,*q,i;
    p=&a[2];
    q=&a[5];
    i=p-q;
    i=q-p;
    a[2]=a[5]=0;
    i=*p-*q
    return 0;
}