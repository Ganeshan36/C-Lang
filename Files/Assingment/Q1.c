// Ganeshan M
// AM.EN.U4CSE19320    
// Q1.Write a program in C to create and store a list of student names in a text file
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    char name[100];
    int n;
    scanf("%d",&n);
    fptr=fopen("Studentname.txt","w");
    if(fptr==NULL){
        fprintf(stderr,"Error!");
        exit(1);
    }
    for(int i=0;i<n;i++){
        printf("Enter the name of the %d student:",i);
        scanf("%s",name);
        fprintf(fptr,"%s\n",name);
    }
    fclose(fptr);
    return 0;

}