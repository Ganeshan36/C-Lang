#include<stdio.h>
int main(){
    //n is the NO of elephants
    int i,sum=0,avg=0,n;
    printf("\nEnter the Number of elephants:");
    scanf("%d",&n);
    int elephant[n];//array containg the weights
    for(i=0;i<n;i++){//getting the weights from the user 
        scanf("%d",&elephant[i]);
    }
    for(i=0;i<n;i++){//adding the weights
        sum=sum+elephant[i];
    }
    //avg is average weight of elephants 
    avg=sum/n;
    printf("Average weights of elephants is :%d ",avg);
}