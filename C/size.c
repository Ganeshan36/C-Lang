#include<stdio.h>
int main(){
    int n,a[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        printf("%d   ",a[j]);
    }
return 0;
}