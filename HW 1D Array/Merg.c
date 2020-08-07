/*Ganeshan M
AM.EN.U4CSE19320
Date:12 April 20
S2 CSE-D
Merging Array*/
#include<stdio.h>
int merge(int [],int [],int [],int,int);
int main() {
	int A[30], B[30], c[60];//A is the 1st array,B is the 2nd ,C is 3 rd Array.
	int i, j, k, n1, n2;//n1,n2 is the size of array A,B;

	printf("\nEnter no of elements in 1st array :");
	scanf("%d", &n1);
	printf("\nEnter  the elements in 1st array :");
	for (i = 0; i < n1; i++) {
		scanf("%d", &A[i]);
	}
	printf("\nEnter no of elements in 2nd array :");
	scanf("%d", &n2);
	printf("\nEnter  the elements in 2nd array :");
	for (i = 0; i < n2; i++) {
		scanf("%d", &B[i]);
	}
    merge(A,B,c,n1,n2);
}
int merge(int A[],int B[],int c[],int n1,int n2){
	int i = 0;
	int j = 0;
	int k = 0;

	// Merging process starts
	while (i < n1 && j < n2) {
		if (A[i] <= B[j]) {
			c[k] = A[i];
			i++;
			k++;
		} else {
			c[k] = B[j];
			k++;
			j++;
		}
	}
	while (i < n1) {
		c[k] = A[i];
		i++;
		k++;
	}
	while (j < n2) {
		c[k] = B[j];
		k++;
		j++;
	}
	printf("\nMerged array is :");
	for (i = 0; i < n1 + n2; i++)
		printf("%d ", c[i]);
    printf("\n");

}