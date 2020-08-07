//GaneshanM
//Write a program in C to count a number of words and characters in a file. Use fgetc to read from the file.
#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fptr;
	fptr=fopen("Studentname.txt","r");
	int c=0;
	char ch=fgetc(fptr);
	while(ch!=EOF){	
		c++;
		ch=fgetc(fptr);
	}
	printf("Number of char : %d\n",c);
	fclose(fptr);
	return 0;
}