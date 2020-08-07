//4.WriteaprogramtosortanarrayofelementsusingBubblesort
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
.*/
#include<stdio.h>
int bublesort(int [],int);
int main(){
    int a[100],n,i;
    printf("Bubblesort \n");
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the Array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    bublesort(a,n);
}
int bublesort(int A[],int limit){
    for(int i=0;i<limit;i++){
        for(int j=i+1;j<limit;j++){
            if(A[i]>A[j]){
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
    printf("Printing the  Sorted Array:");
    for(int i=0;i<limit;i++){
        printf("%d ",A[i]);

    }
    printf("\n");

}