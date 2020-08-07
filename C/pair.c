#include <stdio.h>
#define s 100
void f_pair(int arr[],int limit,int sum){
    int i,j;
    for(i=0;i<limit;i++){
        for(j=0;j<limit;j++){
            if(arr[i]+arr[j]==s)
                printf("%d %d",arr[i],arr[j]);
        } 
    }
}

// Naive method to find a pair in an array with given sum
/*void findPair(int arr[], int n, int sum)
{
	// consider each element except last element
	for (int i = 0; i < n ; i++)
	{
		// start from i'th element till last element
		for (int j = 0; j < n; j++)
		{
			// if desired sum is found, print it and return
			if (arr[i] + arr[j] == sum)
			{
				printf("Pair %d  and %d", arr[i], arr[j]);
				return;
			}
		}
	}
 
	// No pair with given sum exists in the array
	printf("Pair not found");
}*/
 
// Find pair with given sum in the array
int main()
{
	int arr[s];
	int sum ,i;
 
	int n ;
    printf("Enter the list");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sum");
    scanf("%d",&sum);
    f_pair(arr,n,sum);
 
	return 0;
}