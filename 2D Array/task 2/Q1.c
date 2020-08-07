//Ganeshan M
//Am.En.U4CSE19320 S2 CSE D 
//wriggly path 1
#include<stdio.h>
void wriggly1(int M[][10],int ,int );
void read_Matrix(int M[][10],int,int );
int main(){
    int A[10][10],row,col;
    printf("Enter the rows and column :");
    scanf("%d%d",&row,&col);read_Matrix(A,row,col);
    wriggly1(A,row,col);
}
void read_Matrix(int M[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&M[i][j]);
        }
    }
}
void wriggly1(int M[][10],int r,int c){
int flag=0,colcount=0;
while(colcount<c){
    if(flag==0){
        for(int i=0;i<c;i++){
            printf("%d\t",M[colcount][i]);
            flag=1;
        }
    }else if (flag==1/* condition */)
    {
        /* code */for(int i=c-1;i>=0;i--){
            printf("%d\t",M[colcount][i]);
            flag=0;
        }
    }
    colcount++;
}
printf("\n");
}