
//2.Print the sum of even positioned numbers in the list*//
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
*/
#include<stdio.h>
#define s 100
int sunofevenpos(int [],int);
int main(){
    int a[s],n,i;
    printf("Print the sum of even positioned numbers in the list:\n");
    printf("Enter the size of the array:");
    scanf("%d",&n);
     printf("Enter the Array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sunofevenpos(a,n);
}
int sunofevenpos(int A[],int n){
    int i,sum = 0;
    for(i=0;i<n;i++){
        if(i%2==0){
            sum+=A[i];
        }
    }
    printf("Sum of even Positioned No is :%d\n",sum);
}