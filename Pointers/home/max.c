#include<stdio.h>
int main() {
    int n1,n2,*p,*p2;
    p=&n1;p2=&n2;
    scanf("%d%d",&n1,&n2);
    if(*p>*p2){
        printf("%d is the greatest!\n",*p);
    }else{
        printf("%d is the greatest!\n",*p2);
    }
    return 0;
}