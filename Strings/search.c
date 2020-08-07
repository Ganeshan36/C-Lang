#include<stdio.h>
#include<string.h>
int main(){
    int i,l;
    char s[100],ch;
    fgets(s,sizeof(s),stdin);
    scanf("%c",&ch);
    l=strlen(s);
    for(i=0;i<l;i++){
        if((s[i]==ch)){
            printf("found");
            break;
        }
        else{
            printf("Na");
            break;
        }
    }
}