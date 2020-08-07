#include<stdio.h>
int main() {
    int n1,n2,*p,*p1;
    p=&n1;p1=&n2;
    scanf("%d%d",&n1,&n2);
    printf("%d",*p**p1);

    return 0;
}