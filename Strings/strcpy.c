#include<stdio.h>
#include<string.h>
int main(){
    char str[100]="Ganeshan M";
    char str2[10];
    char str3[100];
    strcpy(str2, str);
    strcpy(str3,"Good ");
    puts(str2);
    puts(str3);
}