#include<stdio.h>
#define  s 100
int merge(int arr1[],int arr2[],int res[],int n1,int n2){
	int i = 0;
	int j = 0;
	int k = 0;

	// Merging starts
	while (i < n1 && j < n2) {
		if (arr1[i] <= arr2[j]) {
			res[k] = arr1[i];
			i++;
			k++;
		} else {
			res[k] = arr2[j];
			k++;
			j++;
		}
	}

	/* Some elements in array 'arr1' are still remaining
	 where as the array 'arr2' is exhausted */

	while (i < n1) {
		res[k] = arr1[i];
		i++;
		k++;
	}

	/* Some elements in array 'arr2' are still remaining
	 where as the array 'arr1' is exhausted */

	while (j < n2) {
		res[k] = arr2[j];
		k++;
		j++;
	}

	//Displaying elements of array 'res'
	printf("\nMerged array is :");
	for (i = 0; i < n1 + n2; i++)
		printf("%d ", res[i]);

	return (0);

}
int main(){
    int A[s],B[s],c[s],n1,n2;
    printf("Enter the I1st array size :");
    scanf("%d",&n1);
    printf("Enter the array A");
    for(int i=0;i<n1;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter the 2nd array size :");
    scanf("%d",&n2);
    printf("Enter the array B");
    for(int i=0;i<n2;i++){
        scanf("%d",&B[i]);
    }
    merge(A,B,c,n1,n2);
}