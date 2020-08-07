#include<stdio.h>
int j,i;
void matrixadd(int mtrix1[][10],int matrix2[][10],int matrix3[][10],int,int);
void readmatrix(int mtrix1[][10],int,int);
void print(int mtrix[][10],int,int);
void matrixadd(int mtrix1[][10],int matrix2[][10],int matrix3[][10],int r,int c){
    int j,i;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            matrix3[i][j]=mtrix1[i][j]+matrix2[i][j];
        }
    }
}
void readmatrix(int mtrix1[][10],int row,int col){
    printf("Enter the 1st matrix");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&mtrix1[i][j]);
        }
    }
}
void print(int mtrix1[][10],int row,int col){
    printf("printing resultant matrix:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",mtrix1[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int Arr1[10][10],Arr2[10][10],Arr3[10][10],row,col;
    printf("Enter the size of the row and columns:\n");
    scanf("%d %d",&row,&col);
    readmatrix(Arr1,row,col);
    readmatrix(Arr2,row,col);
    matrixadd(Arr1,Arr2,Arr3,row,col);
    print(Arr3,row,col);
    return 0;
}