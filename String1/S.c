#include<stdio.h>
int singleNumber(int* nums, int numsSize){
    int i;
    for(i=0;i<numsSize;i++){
        for(int j=0;j<numsSize;j++)
        if(nums[i]!=nums[i+1]){
            printf("%d",i);
            break;
        }
    }
}
int main(){
    int l, a[1000];
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        scanf("%d",&a[i]);
    }
    singleNumber(a,l);
    
}

