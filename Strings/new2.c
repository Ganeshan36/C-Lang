#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf("Enter a Name:");
    scanf("%s",c);
    int i=0;
    for(i=0;i<c[i]!='\0';i++);
    printf("\nString length %s:\t %d",c,i);
    printf("\nThe length of the str %s : %ld",c,strlen(c));
    return 0;

}