#include<stdio.h>
#define s 100
void concat(char *,char *,char *);
int main(){
  char s1[s],s2[s],s3[s];
  fgets(s1,s,stdin);
  fgets(s2,s,stdin);
  concat(s1,s2,s3);
  puts(s3);
}
void concat(char *str1,char *str2,char *str3){
  int i=0,j=0;
  while(str1[i]!='\0'){
    str3[j++]=str1[i++];
  }
  i=0;
  while(str2[i]!='\0'){
    str3[j++]=str2[i++];
  }
  str3[j]='\0';
  printf("%d",str3);
}
