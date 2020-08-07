#include<stdio.h>
int main(){
    char n,*p;
    p=&n;
    float f,*p1;
    p1=&f;
    double d,*p2;
    p2=&d;
    scanf("%c%f%lf",&n,&f,&d);
    printf("%c\t%f\t%lf",*p,*p1,*p2);
}