#include<stdio.h>
#define n 5
void traverse(int []);
int main(){
    int i,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    traverse(a);
}
void traverse(int a[]){
    for(int i=0;i<5;i++){
        printf("%d \t",a[i]);
    }
}