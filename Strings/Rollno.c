#include<stdio.h>
#include<string.h>
int main(){
    char s[100]="AM.EN.U4CSE19320",ch[3];
    int i,l;
    l=strlen(s);
    int d=l-2;
    printf("%d\n",s[d]%5);
}