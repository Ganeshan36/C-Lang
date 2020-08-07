/*Ganeshan M
AM.EN.U4CSE19320

Search substring*/
#include<stdio.h>
int s_search(char *,char *);
int main(){
    char str[100],str1[100];
    fgets(str,100,stdin);
    fgets(str1,100,stdin);
    s_search(str,str1);
}
int s_search(char *s,char *s2){
    int i=0,j=0,l;
    for(l=0;s2[l]!='\0';l++);
    while (s[i]!='\0'&&s2[j]!='\0')
    {
        if(s[i]==s2[j]){
            j++;
        }
        else
        { 
            j=0;
        }
        i++;
        
    }
    if(j==l){
        printf("String is found  at index %d",i-j);
    }
    else{
        return -1;
    }
    
}