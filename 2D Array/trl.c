#include<stdio.h>
int main(){
    int A[2][2]={{2,3},{3,2}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(i>=2)
            printf("\n");
            printf("%d",A[i][j]);
        }
    }
}