#include<stdio.h>
#define S 100
int search(char *,char *);
int main(){
    char str[S],str1[S],str2[S];
    printf("Enter the string:");
    fgets(str,S,stdin);
    printf("Enter the Substring:");
    fgets(str1,S,stdin);
    search(str,str1);
    return 0;
}
int search(char *s,char *s1){
    int i=0,l,j=0;
    for(i=0;s1[i]!='\0';i++);
    i=0;
    while(s[i]!='\0'&&s[j]!='\0'){
        if(s[i]==s1[j]){
            i++;
        }else{
            j=0;
        }
        i++;
    }
    if(j==l){
        printf("substring is found at index %d",i-j);
    }else{
        return -1;
    }
}