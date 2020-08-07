
//5.Given an unsorted array and two numbers x and k, find k closest values to x*/
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
*/
#include<stdio.h>
int crossover(int Arr[], int l, int h, int z)
{
    if (Arr[h] <= z) 
        return h;

    if (Arr[l] > z)  
        return l;

    int m = (l + h)/2; 
    if (Arr[m] <= z && Arr[m+1] > z)
        return m;
    if(Arr[m] < z)
        return crossover(Arr, m+1, h, z);
    return crossover(Arr, l, m - 1, z);
}
void closestvalues(int Arr[], int z, int k, int n)
{
    int l = crossover(Arr, 0, n-1, z);
    int r = l+1;   
    int c = 0; 
    if (Arr[l] == z) 
    l--;
        while (l >= 0 && r < n && c < k)
        {
            if (z - Arr[l] < Arr[r] - z)
                printf("%d ", Arr[l--]);
            else
                printf("%d ", Arr[r++]);
            c++;
        }
    while (c < k && l >= 0)
        printf("%d ", Arr[l--]), c++;
    while (c < k && r < n)
        printf("%d ", Arr[r++]), c++;
    printf("\n");
}
int main(){
    int a[100],n,i,z,k;
    printf("Given an unsorted Array and two numbers z and k, find k closest values to z:\n");
    printf("Enter the size of the Array:");
    scanf("%d",&n);
    printf("Enter the Array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the K value:");
    scanf("%d",&k);
    printf("Enter the value:");
    scanf("%d",&z);
    closestvalues(a,z,k,n);
}