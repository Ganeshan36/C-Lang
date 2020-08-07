#include<stdio.h>
void swap(int *n1,int *n2){
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}
int main() {
    int v1=19,v2=22;
    printf("\n Value before:\n%d\t%d\n",v1,v2);
    swap(&v1,&v2);
    printf("\nAfter :\n%d\t%d\n",v1,v2);
    return 0;
}