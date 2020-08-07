#include<stdio.h>
void read(int A[][10],int ,int );
void matrixMul(int A[][10],int A1[][10],int A3[][10],int,int ,int,int);
int main(){
    int A[10][10],a[10][10],a1[10][10]={0},row1,row2 ,col1,col2;
    printf("Enter the rows and colums of Matrix 1:");
    scanf("%d%d",&row1,&col1);
    printf("Enter the rows and colums of Matrix 2:");
    scanf("%d%d",&row2,&col2);
    read(A,row1,col1);
    read(a,row2,col2);
    matrixMul(A,a,a1,row1,row2,col1,col2);
}
void read(int A[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void matrixMul(int A[][10],int A1[][10],int A3[][10],int r,int r1,int c,int c1){
    if(c!=r1){
        printf("matrix cannot be multiplied:");
    }else{
    for(int i=0;i<r;i++){
        for(int j=0;j<c1;j++){
            A3[i][j]=0;
            for(int k=0;k<c;++k) 
            A3[i][j]+=A[i][k]*A1[i][k];
        }
    }
  }
  for(int i=0;i<r;i++){
      for(int j=0;j<c1;j++){
        printf("%d\t",A3[i][j]);
    }
    printf("\n");
  }
}