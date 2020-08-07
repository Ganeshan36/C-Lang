#include<stdio.h>
int main(){
    int x[100];
    for(int i =0;i<5;i++){
        scanf("%d",x+i);
    }
    printf("Updated array\n");
    for(int  i=0;i<5;i++){
        printf("%d\n",*(x+1));

    }
}