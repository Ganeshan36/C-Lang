#include<stdio.h>
void search(char *,char *);
int main(){
    char str[100],sstr[100];
    printf("Enter string:");
    fgets(str,100,stdin);
    printf("Enter sub string:");
    fgets(sstr,100,stdin);
    search(str,sstr);
}
void search(char *s,char *s1){
    int i,j;
    for(i=0;s[i]!='\0';i++){
        for(j=0;s1[j]!='\0';j++){
            if(s[i]!=s[j]){
                i++;
            }else{
                s1[j]==s[i];
                j++;
            }
        }if(s[i]=='\0'&&s1[j]=='\0'){
            printf("Yes");
            break;
        }else
        {
            printf("No");
            break;
        }
        
    }
    int l=0;
    for(l=0;s1[i]!='\0';l++);
    if(j==l){
        printf("Found at%d index",i-j);
    }else{
        printf("%d",-1);
    }
}