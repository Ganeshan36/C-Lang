/*Ganeshan M
S2 CSE D
AM.En.U4CSE19320*/
//2.Given a matrix compute the maximum row sum ( sum of each row) of the matrix.
#include<stdio.h>
void read(int M1[][10],int ,int);
int rowsum(int M1[][10],int [],int,int);
int main(){
    int A1[10][10],A2[10],row,col;
    printf("Enter the row and col:\n");
    scanf("%d%d",&row,&col);
    read(A1,row ,col);
    rowsum(A1,A2,row,col);

}
int rowsum(int M1[][10],int A[],int r,int c){
    int sum;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+M1[i][j];
        }
        A[i]=sum;
    }
    int max=A[0];
    for(int i=0;i<r;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    printf("The maximum sum is %d\n",max);
}
void read(int M1[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&M1[i][j]);
        }
    }
}