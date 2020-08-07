//7.Count all pairs whose sum is an odd number*/
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
*/
#include <stdio.h>
int oddsumcount(int [],int [],int ,int);
int main() 
{ 
	int a[100],a1[100],n,n1,i;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the Array1:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of the array:");
    scanf("%d",&n1);
    printf("Enter the Array2:");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    int l=n1+n;
	printf("%d",oddsumcount(a, a1, n, n1)); 
	return 0;
}
int oddsumcount(int arr1[],int arr2[],int n1,int n2){
    printf("\nPairs: ");
    int count=0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if((arr1[i]+arr2[j])%2!=0){
                printf("{%d,%d}",arr1[i],arr2[j]);
                count=count+1;
            }
        }
    }
    printf(" %d\n",count);
}