#include<stdio.h>
void read(int A[][10],int ,int );
void wriggly(int a[][10],int ,int );
int main(){
    int m[10][10],row,col;
    printf("Enter the row and col:");
    scanf("%d%d",&row,&col);
    read(m,row,col);
    wriggly(m,row,col);
}
void read(int A[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void wriggly(int a[][10],int r,int c){
    int flag=0,rowcnt=0;
    while (rowcnt<r)
    {
        if(flag==0){
            for(int i=0;i<r;i++){
                printf("%d\t",a[rowcnt][i]);
                flag=1;
            }
        }else if(flag==1){
            for(int i=c-1;i>=0;i--){
                printf("%d\t",a[rowcnt][i]);
                flag =0;
            }
        }
        rowcnt++;
    }
    
}
