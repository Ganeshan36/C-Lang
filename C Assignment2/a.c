#include<stdio.h>
int main(){
    int a[]={1,2,3,4,7,8,9,10,11};
    printf("No of elements :%lu\n",sizeof(a)/sizeof(a[0]));

}