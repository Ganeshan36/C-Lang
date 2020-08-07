#include<stdio.h>
#define size 100
void search(int,int [],int);
int main(){
    int n,a[size],pos,ele,i;
    scanf("\nEnter the limit of the array:%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("Enter the element:%d",&ele);
search(ele,a,n);
}
void search(int ele,int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==ele){
            printf("YES");
            break;
        }
        else
        printf("No");
    }
}