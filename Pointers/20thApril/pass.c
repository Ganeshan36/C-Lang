#include<stdio.h>
void sal_(int *var,int b){
    *var =*var + b;
}
int main() {
    int sal=0,bon=0;
    printf("Enter teha sl:");
    scanf("%d",&sal);
    printf("Enter the bonus:");
    scanf("%d",&bon);
    sal_(&sal,bon);
    printf("%d",sal);
    return 0;
}
