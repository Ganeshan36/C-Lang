#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch1,ch2;
    scanf("%s",str);
    scanf(" %c %c",&ch1,&ch2);
    int l= strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]==ch1){
            str[i]=ch2;
        }
    }
    puts(str);
    return 0;
}