/*
Ganeshan M
Date:12 April 20
S2 CSE D
Roll No:AM.EN.U4CSE19320
*/
#include<stdio.h>
void FindPair(int [],int,int);
int main(){
    int Arr[100], i, j, k, Limit;
    printf("\nEnter array limit : ");
    scanf("%d", &Limit);
    printf("Enter Numbers : \n");
    for (i = 0; i < Limit; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&k);
    FindPair(Arr,Limit,k);
}
void FindPair(int arr[],int limit,int s){
    int i,j;
    for(i=0;i<limit;i++){
        for(j=0;i<limit;j++){
            if(arr[i]+arr[j]==s)
            printf("(%d%d)",arr[i],arr[j]);
        }
    }
}