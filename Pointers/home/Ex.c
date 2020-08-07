#include<stdio.h>
int main() {
    int a=10;
    int *p;
    p=&a;
    printf("%p\n",p);
    printf("%d",*p);
    int *p1;
    char *p2;
    float *p3;
    return 0;
}