#include<stdio.h>
#include<string.h>
int main(){
    char s[]="GA";
    char s1[]="Za",str[]="GA";
    int r;
    r=strcmp(s,s1);
    printf("%d\n",r);
    r=strcmp(s,str);
    printf("%d\n",r);
    gets(s);
}