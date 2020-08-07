#include<stdio.h>
int main(int argc,char *argv[]){
    printf("Program name is: %s",argv[0]);
    if(argc==1){
        printf("\nNO Extra Command Line argument passed other than program name:\n");
        return 0;
    }
}