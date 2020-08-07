#include<stdio.h>
int insert(int [],int,int);
int main(){
    const int size=100;
    int A[size],n,i,pos;
    printf("Pgm to search a element ");
    printf("Enter the list");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    scanf("%d",&pos);
insert(A,n,pos);
}
int insert(int A[],int limit,int pos){
    int value;
    for(int i = limit;i>=pos;i--){
        A[i+i]=A[i];
    }
     A[pos-1]=value;
     limit=limit+1;
return(limit);
}
