#include<stdio.h>
#include<string.h>
int main(){
    int i,flag=0;
    char str[100],c;
    scanf("%s\n%c",str,&c);
    int l=strlen(str);
    for(i=0;i<l;i++){
        if(str[i]==c){
            flag=1;
            break;
        }
    }
    if(flag){
        printf("Character found");
    }else{
        printf("Not present");
    }
    return 0;
}