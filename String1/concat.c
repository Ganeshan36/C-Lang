/*Ganeshan M
concatination two strings*/
#include<stdio.h>
#define s 100
void conca_t(char *,char *,char *);
int main(){
    char s1[s],s2[s],s3[s];
    printf("Enter the 1st string:");
    scanf("%s",s1);
    printf("Enter the 2md string:");
    scanf("%s",s2);
    conca_t(s1,s2,s3);
}
void conca_t(char *str1,char *str2,char *str3){
    int i=0,j=0;
    while(str1[i]!='\0'){
        str3[j]=str1[i];
        i++;j++;
        
    }i=0;
    while(str2[i]!='\0'){
        str3[j]=str2[i];
        i++;j++;

    }
    str3[j]='\0';
    printf("%s\n",str3);
}