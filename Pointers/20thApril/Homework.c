#include<stdio.h>
void copy(int from[],int to[],int size){
    int *p;
    for(int i=0;i<size;i++){
        p=&from[i];
        to[i]=*p;
    }
    for(int i=0;i<size;i++){
        printf("%d\n",to[i]);
    }
}
int main() {
    int a[]={1,2,3,4,5,6},a1[5],s=6;
    copy(a,a1,s);
    return 0;
}