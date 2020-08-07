//Ganeshan M
//Am.En.U4CSE19320 S2 CSE D 
//sort Matrix
#include<stdio.h>
void sort_antidiagonal(int M[][10],int,int);
void read(int A[][10],int,int );
void bubbleSort(int arr[], int );
int main(){
    int A[10][10],row,col;
    printf("Enter the rows and columns:");
    scanf("%d%d",&row,&col);
    if(row!=col){
        printf("not a squar matrix:");
    }else{
    read(A,row,col);
    sort_antidiagonal(A,row,col);
}
}
void read(int A[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void sort_antidiagonal(int A[][10],int row,int C){
    int i,j,k,c;
    for(c=0;c<row-1;c++){
        for(i=0,j=row-1;i<row-1+0;i++,j--){
            if(A[i][j]>A[i+1][j-1]){
                k=A[i][j];
                A[i][j]=A[i+1][j-1];
                A[i+1][j-1]=k;
            }
        }
    }
printf("Matrix after sorting:\n");
    for(i=0;i<row;i++){
        for(j=0;j<C;j++){
            printf("%d ",A[i][j]);
                if(j==row-1){
                    printf("\n");
                }
        }
    }
}