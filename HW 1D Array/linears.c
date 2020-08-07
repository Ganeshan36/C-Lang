 /*Ganeshan M
 Date:12 April 20
AM.EN.U4CSE19320
S2 CSE-D
Linear Search */
#include<stdio.h>
 void search(int [],int,int);
 int main(){
    int a[100],n,ele;//n is the limit of the array elel is the element to be searched.
    printf("Linear Search \nEnter a limit n:");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched:\n");
    scanf("%d",&ele);
search(a,n,ele);
}
void search(int A[],int limit,int ele){
    int i,found=0;
    for(i=0;i<limit;i++){
        if(A[i]==ele){
            printf("Element is present");
            break;
        }
    }
    if(i==limit)
    printf("Element not found");
    
}