/*
Ganeshan M
Date:12 April 20
S2 CSE D
Roll No:AM.EN.U4CSE19320
Searching PRogram
*/
#include <stdio.h>
#define size 100
void search(int[],int,int);
int main()
{
	int A[size],n,i,ele;//A is the array ele is the element to be searched
	printf("This is the program for searching an element in an array\n");
	printf("Enter the limit ");
	scanf("%d",&n);
	printf("Enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&ele);
	
	search(A,n,ele);
	
}
void search(int A[],int limit,int element)
{
	int i;
	int found=0;
	for(i=0;i<limit;i++)
	{
		if(A[i]==element)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("Found %d at index %d",element,i);
	}
	else
	{
		printf("Element not found");
	}
    printf("\n");
}