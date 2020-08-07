#include<stdio.h>
int main(){
    int x[100],i;
    for(i=0;i<5;i++){
        scanf("%d",x+i);
    }
    printf("Updated Array\n");
    for(i=0;i<5;i++){
        printf("%d ",*(x+i));
    }
}