#include<stdio.h>
int search(int [],int,int);
int main(){
    int n,a[n],b;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
search(a,n,b);
}
int search(int A[],int l,int e){
    int i;
    int f=1;
    for(int i=0;i<l;i++){
        if (A[i]==e){
            f=1;
            break;}
    }
    if (f==1)
        printf("Yes");
    else
    {
        printf("NO");
    }
    
}