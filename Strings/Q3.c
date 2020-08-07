//GaneshaM
//AM.EN.U4CSE19320
//Write a program to input a string and check if contains only unique characters.
#include<stdio.h>
#include<string.h>
int main(){
    char st[100];
    int i,flg=0;
    fgets(st,sizeof(st),stdin);
    int l;
    l=strlen(st);
    for(i=0;i<l;i++){
        for(int j=i+1;j<l;j++){
            if(st[i]==st[j]){
                flg=1;
                break;
            }
        }
    }
    if(flg==0){
        printf("Yes\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}