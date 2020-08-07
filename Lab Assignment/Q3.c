//3.Find the kth smallest element in the Array
s/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
3.Find the kth smallest element in the Array*/
#include<stdio.h>
int swap(int [],int);
int kthsmallestelement(int []);
int main(){
    int a[100],n,i;
    printf("Program to Find the Kth smallest element:\n");
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the Array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    swap(a,n);
    int b=kthsmallestelement(a);
    printf("Kth smallest element in the Array:%d",b);
}
int swap(int a[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int kthsmallestelement(int A[]){
    int i,k;
    printf("Entere the Kth element:\n");
    scanf("%d",&k);
    return A[k-1];
}