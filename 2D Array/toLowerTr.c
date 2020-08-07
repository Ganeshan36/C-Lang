#include<stdio.h>
void read(int M1[][10],int,int);
void print(int M1[][10],int,int);
void lower(int M1[][10],int,int);
int main(){
    int r,c,Arr[10][10];
    printf("Enter the row and col:\n");
    scanf("%d%d",&r,&c);
    read(Arr,r,c);
    print(Arr,r,c);
    lower(Arr,r,c);
    print(Arr,r,c);
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
void lower(int M1[][10],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){
                M1[i][j]=0;
            }
        }
    }
}