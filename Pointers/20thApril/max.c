#include<stdio.h>
int main() {
    int n1,n2,*p1,*p2;
    p1=&n1;p2=&n2;
    scanf("%d%d",&n1,&n2);
    if(*p1>*p2){
        printf("%d",*p1);
    }
    else
    {
        printf("%d",*p2);
    }
    
    return 0;
}