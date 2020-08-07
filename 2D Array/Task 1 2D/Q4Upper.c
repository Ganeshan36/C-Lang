//Ganeshan M
//S2 CSE D AM.U4CSE19320
//Given a matrix convert it to uppertriangular and compute the sum of elements of the matrix. Check whether the computed sum is greater than or equal to100 or not. If so print YES else print NO.
#include<stdio.h>
void readMatrix(int m[][10],int);
void to_upper(int m[][10],int ,int);
void printMatrix(int m[][10],int );
int main(){
    int A[10][10],n,sum;
    printf("enter the Row size ");
    scanf("%d",&n);
    readMatrix(A,n);
    printMatrix(A,n);
    to_upper(A,n,sum);
    return 0;

}
void readMatrix(int m[][10],int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&m[i][j]);
        }
    }
}
void to_upper(int m[][10],int r,int sum){
    sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(i<=j){
                m[i][j]=0;
            }else{
                sum=sum+m[i][j];
            }
        }
    }
        printf("Printing Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    if(sum>=100){
        printf("--YES--");
    }else{
        printf("--NO--\n");
    }
}
void printMatrix(int m[][10],int r){
    printf("Printing Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
