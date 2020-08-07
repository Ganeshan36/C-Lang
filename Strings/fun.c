#include<stdio.h>
void strconcat(char *,char *,char *);
int main(){
    char str1[100],str2[100],str3[100];
    scanf("%s%s",str1,str2);
    strconcat(str1,str2,str3);
    puts(str3);
}
void strconcat(char *s,char *s1,char *s2){
    int i=0,j=0;
    while(s[i]!='\0'){
        s2[j++]=s[i++];
    }
    i=0;
    while(s1[i]!='\0'){
        s2[j++]=s1[i++];
    }
    s2[j]='\0';
}