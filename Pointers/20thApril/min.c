#include<stdio.h>
void minmax(int a,int b,int *min,int *max){
    if(a>b){
        a=*max;
        b=*min;
    }else{
        b=*max;
        a=*min;
    }
}
int main() {
    int small,big,x,y;
    scanf("%d%d",&x,&y);
    minmax(x,y,&small,&big);
    printf("%d<=%d",small,big);
    return 0;
}