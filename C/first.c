#include<stdio.h>
#define size 100
int main(){
   int a[size],n,sum=0;
   scanf("%d",&n);
   for(int i=0;i<3;i++){
       scanf("%d",&a[i]);
   }
   for(int i=0;i<3;i++){
        sum=sum+a[i];
   }
   printf("Sum of arrar%ls\n",&sum);
   for(int i=0;i<n;i++){
       a[i]=a[i]+1;
   }
   for(int i=0;i<n;i++){
       printf("%d\n",a[i]);
   }
}