#include<stdio.h>
void diagonalSum(int A[][10],int,int);
void read(int M[][10],int,int);
int main() {
    int A[10][10],row,col;
    printf("Enter the row ans col:");
    scanf("%d%d",&row,&col);
    read(A,row,col);
    diagonalSum(A,row,col);

    return 0;
}
void diagonalSum(int M[][10],int r,int c){
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i+j==r-1){
            sum=sum+M[i][j];
            }
        }
    }
    printf("%d\n",sum);
}
void read(int M[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&M[i][j]);
        }
    }
}