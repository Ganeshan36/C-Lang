#include<stdio.h>
int main(int argc,char* argv[]){
    printf("Program Name is : %s\n",argv[0]);
    if(argc==1){
        printf("\n NO Extra Command Line arguments Passed Other than program name\n");
        }
        if(argc>=2){
            printf("\nNo of Arguments Passed %d",argc);
            printf("\n----Following Are the command Line arguments Passsed---");
            for(int i=0;i<argc;i++){
                printf("\nargv[%d]: %s",i,argv[i]);
            }
        }
    return 0;
}
