#include<stdio.h>
int search_(char *,char *);
int main(){
    char str[100],str1[100];
    printf("Enter the text :");
    fgets(str,100,stdin);
    printf("Enter teh Substring:");
    fgets(str1,100,stdin);
    search_(str,str1);

}
int search_(char *s,char *ss){
    int i=0,j=0;
    int l=0;
    for(l=0;ss[l]!='\0';l++);
    for(i=0;s[i]!='\0';i++){
        for(j=0;ss[j]!='\0';j++){
            if(s[i]!=ss[j]){
                i++;
            }else{j++;}
        }if(i==j){
            printf("String present at %d %s",i-j,ss);
            break;
        }else{
            printf(" -1");
        }
    }
}