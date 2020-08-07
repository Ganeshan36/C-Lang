#include<stdio.h>
int main(int argc,char * argv[]){
    printf("Program Name is: %s",argv[0]);
    if(argc==1){
        printf("\nEnter the command line argument passed other than the program name:");
        return(0);
    }
}