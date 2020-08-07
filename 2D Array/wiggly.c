#include<stdio.h>
void wrigglyprint(int a[][10],int ,int );
void read(int a[][10],int ,int );
void print(int a[][10],int ,int );
int main(){
    int A[10][10],row,col;
    printf("Enter the roe and col size:");
    scanf("%d%d",&row,&col);
    read(A,row,col);
    wrigglyprint(A,row,col);
}
void read(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void print(int a[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
void wrigglyprint(int a[][10],int r,int c){
    int flag=1,rowcnt=0;
    while(rowcnt<r){
        if(flag==0){
            for(int i=c-1;i>=0;i--){
                printf("%d\t",a[rowcnt][i]);
                flag =1;
            }
        }else if (flag==1){
            for(int i=0;i<c;i++)
                printf("%d\t",a[rowcnt][i]);
                flag=0;
        }
        rowcnt++;
    }
}