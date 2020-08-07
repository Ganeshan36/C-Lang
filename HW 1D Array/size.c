/*Ganeshan M
AM.EN.U4CSE19320
S2 CSE-D
Using size of Array*/
#include<stdio.h>
int main(){
    int a[100];
    float b[100];
    char c[100];
    double d[100];
    printf("Size of int %lu bytes  \n float %lu bytes \nchar %lu bytes \n double %lu\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}