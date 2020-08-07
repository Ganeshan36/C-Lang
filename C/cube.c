#include<stdio.h>
int cube(int n){
    return n*n*n;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("Cube is %d\n",cube(a));
}
