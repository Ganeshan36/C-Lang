#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="Good ",str2[]="Bad";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
}