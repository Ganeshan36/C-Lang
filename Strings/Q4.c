//GaneshaM
//AM.EN.U4CSE19320
//Write a program to input a binary string contains binary numbers only. Convert it to an encoding such that the encoding has counts of contiguous 1s (separated by 0s)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char s[100];
    int c[100],cnt=0,index=0;
    scanf("%s",s);
    char de[2] = "0", *tok;
    tok = strtok(s, de); //Splits the string k[] using "." as the delimeter
    while (tok != NULL) //Prints the split string
    { 
        printf("%ld ", strlen(tok));
        tok = strtok(NULL, delim);
    }   
}