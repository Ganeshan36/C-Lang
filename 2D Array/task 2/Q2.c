//Ganeshan M
//Am.En.U4CSE19320 S2 CSE D 
//wriggly path 2
#include<stdio.h>
void read(int A[][10],int ,int );
void vwriggly(int a[][10],int ,int );
int main(){
    int m[10][10],row,col;
    printf("Enter the row and col:");
    scanf("%d%d",&row,&col);
    read(m,row,col);
    vwriggly(m,row,col);
}
void read(int A[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&A[i][j]);
        }
    }
}
void vwriggly(int A[][10],int r ,int c){
    int flag=1,colnt=r-1,i;
    while(colnt>=0){
        if(flag==1){
            for(int i=0;i<c;i++)
                printf("%d\t",A[i][colnt]);
                flag =0;
            }
            else if(flag==0){
                    for(int i=r-1;i>=0;i--){
                    printf("%d\t",A[i][colnt]);
                    flag=1;
                }
            }
        colnt--;
    }
    printf("\n");

}