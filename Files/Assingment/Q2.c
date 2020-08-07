//Ganeshan M
//Write a program in C to read the contents of the existing file created in 1 and store the list ofnames into an array. Use fscanf to read the file.
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr=fopen("Studentname.txt","r");
    if ((fptr = fopen("Studentname.txt", "r")) == NULL) {
        printf("Error! opening file\n");
        exit(1);
    }
	char name[100];
    while(fscanf(fptr,"%s\n",name)!=EOF){
        printf("%s\n",name);
    }
	fclose(fptr);
	return 0;
}
