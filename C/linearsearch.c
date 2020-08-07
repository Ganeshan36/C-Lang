#include<stdio.h>
void linear(int [],int,int);
int main(){
    int n ,a[n],i,ele;
    printf("Enter the limit:");
    scanf("%d",&n);
    scanf("Enter the element%d",&ele);
linear(a,n,ele);
}
void linear(int a[],int n,int e){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==e)
        printf("Element present");
        else
        printf("Not preseent");
    }
}