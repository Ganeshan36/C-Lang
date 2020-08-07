#include<stdio.h>
void print(int a[][10],int );
void read(int A[][10],int );
void sortdiagonal(int A[][10],int [],int );
void read(int A[][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scan("%d",&A[i][j]);
        }
    }
}
void sortdiagonal(int A[][10],int a[],int n){
    int i,j,key,k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                a[]=A[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j=n-1){
                a[k]=A[i][j];
                k++;
            }
        }
    }
}
void print(int a[][10],int n){
    for (int  i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++){
            printf("%d",A[i][j]);
        }
    }
    
}
int main(){
    int n,a[10][10],b[10];
    scanf("%d",&n);
    read(a,n);
    sortdiagonal(a,b,n);
    printf(a,n);
}