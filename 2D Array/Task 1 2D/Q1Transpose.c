//Ganeshan M
//S2 CSE D
//Write a Function to transpose a matrix
#include<stdio.h>
int i,j;
void read(int M[][10],int ,int );
void transpose(int M1[][10],int M2[][10],int,int);
void print(int M1[][10],int,int );
void read(int M[][10],int r,int c){
    printf("Enter the Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&M[i][j]);
        }
    }
}
void print(int M1[][10],int r,int c){
    printf("Printing the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",M1[i][j]);
        }
        printf("\n");
    }
}
void transpose(int M1[][10],int M2[][10],int r,int c){
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            M2[j][i]=M1[i][j];
        }
    }
    printf("After transpose:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
            printf("%d\t",M2[i][j]);
            if(j==r-1){
                printf("\n");
            }
        printf("\n");
    }
}
int main(){
    int row ,col,A1[10][10],A2[10][10];
    printf("Enter the row and column Size:");
    scanf("%d%d",&row,&col);
    read(A1,row,col);
    print(A1,row,col);
    transpose(A1,A2,row,col);
    return 0;
}