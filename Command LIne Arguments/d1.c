#include<stdio.h>
int main(int argc, char* argv[]){
    printf("Program name is:%s",argv[0]);
    if(argc==1){
        printf("\nNo extra Command line Argument is passed other than The prgram Name ");
    }
    if(argc>=2){
        printf("\nNO of Arguments : %d",argc);
        printf("\n---Following Are the Command line Arguments Passed---");
        for(int i=0;i<argc;i++){
            printf("\nargcv[%d]:%s",i,argv[i]);
        }
    }
}