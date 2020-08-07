#include<stdio.h>
vid swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main(){
    int a[100],i,s,j;
    printf("Enter the size :");
    scanf("%d",&s);
    printf("Enter the arra elements :");
    for(i=0;i<s;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<s;j++){
        for(int k=j+1;k<s;k++){
            if(a[j]>a[k]){
                swap(a[j],a[k])
            }
        }
    }
}