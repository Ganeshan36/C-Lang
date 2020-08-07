#include<stdio.h>
void readmatrix(int m1[][10],int ,int);
void daigonal(int m1[][10],int ,int);
int main(){
  int m1[10][10],r,c;
  printf("Enter the row and column size:\n");
  scanf("%d%d",&r,&c);
  readmatrix(m1,r,c);
  daigonal(m1,r,c);
}
void readmatrix(int M1[][10],int r,int c){
  printf("Enter the Array:\n");

  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      scanf("%d",&M1[i][j]);
    }
  }
}
void daigonal(int M1[][10],int r,int c){
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(j==i){
        printf("%d\t",M1[i][j]);
      }
  }
}
}
