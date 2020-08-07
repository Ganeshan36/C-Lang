#include<stdio.h>
int j,i;
void readmatrix(int m1[][10],int ,int);
void print(int m[][10],int ,int);
void transpose(int m[][10],int m2[][10],int ,int);
void readmatrix(int m1[][10],int r,int c){
    int i,j;
    printf("Enter the Array:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m1[i][j]);
        }
    }
}
void print(int m[][10],int r,int c){
    printf("Displaying the matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
}
void transpose(int m[][10],int m2[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            m2[j][i]=m[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++)
            printf("%d\t",m2[i][j]);
            if(j==r-1){
                printf("\n");
            }
        printf("\n");
    }
}
int main(){
    int A1[10][10],A2[10][10],A3[10][10],row,col;
    printf("Enter the row and col:\n");
    scanf("%d%d",&row,&col);
    readmatrix(A1,row,col);
    transpose(A1,A2,row,col);
    return 0;
}
