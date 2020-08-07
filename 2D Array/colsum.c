#include<stdio.h>
void read(int M1[][10],int ,int );
int colsum(int M1[][10],int colsum[100],int ,int);
void print(int M1[][10],int,int);
int colsum(int M1[][10],int colsum[100],int r,int c){
    int sum=0,i,j;
    for(j=0;j<c;j++){
        sum=0;
        for(i=0;i<c;i++){
            sum=sum+M1[i][j];
        }
        colsum[j]=sum;
    }
    return 0;
}
int main(){
    int r,c,Arr[10][10],C[100];
    printf("Enter the row and col:\n");
    scanf("%d%d",&r,&c);
    read(Arr,r,c);
    colsum(Arr,C,r,c);
    for(int i=0;i<c;i++){
        printf("%d\t",C[i]);
    }
    return 0;

}
void read(int M1[][10],int r,int c){
    printf("Enter the Arrar:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&M1[i][j]);
        }
    }
}
void print(int M1[][10],int r,int c){
    printf("Displaying the Array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",M1[i][j]);
        }
        printf("\n");
    }
}