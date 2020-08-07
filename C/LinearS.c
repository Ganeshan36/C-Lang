#include<stdio.h>
void search(int [],int ,int);
int main(){
    const int size=100;
    int A[size],n,i,element;
    printf("Pgm to search a element ");
    printf("Enter the list");
    scanf("%d",&n);
    printf("Enter the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&*(A+i));
    }
    printf("Enter the element to be searched");
    scanf("%d",&element);
    search(A,n,element);
}
void search(int A[],int limit,int element){
    int i;
    for(i=0;i<limit;i++){
        if(A[i]==element){
            printf("Found %d at index %d",element,i);
            break;

        }
    }
if(i==limit)
printf("NO");
}

