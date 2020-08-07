#include<stdio.h>
void insort(int A[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=A[i];
        j=i-1;
        while(j>=0&&A[i]>key){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=key;
    }
    for(i=0;i< n;i++){
        printf("%d",A[i]);
    }
}
int main(){
    int i,n,A[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&A[i]);

    insort(A,n);
    return 0;
}