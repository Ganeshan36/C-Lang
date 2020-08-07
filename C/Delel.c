#include<stdio.h>
int main(){
    int i,j,Array[]={2,3,2,3,0};
    for(i=0;i<5;i++)
    for(j=0;j<5;j++){
        printf("ARR[%d]=%d,Arr[%d]=%d\n",i,Array[i],j,Array[j]);
}
}