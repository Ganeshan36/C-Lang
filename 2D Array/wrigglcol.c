#include<stdio.h>
void read(int a[][10],int ,int );
void wrigglycol(int a[][10],int,int);
int main(){
    int A[10][10],row,col;
    printf("Enter the roe and col size:");
    scanf("%d%d",&row,&col);
    read(A,row,col);
    wrigglycol(A,row,col);
    
}
void read(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void wrigglycol(int a[][10],int r,int col){
    int flag=1,colcnt=0;
    while(colcnt<col){
        if(flag==1){
            for(int i=0;i<=col;i++){
                printf("%d\t",a[colcnt][i]);
                colcnt++;
                flag=0;
            }
        }else if(flag==0){
            for(int i=col-1;i>=col;i--){
                printf("%d\t",a[col][i]);
                flag=1;
            }
        }
    }
}