#include <stdio.h>
#include <string.h>
int main()
{
	char string[30],ch;
	int l=0,i=0;
    fgets(string,sizeof(string),stdin);
    l=strlen(string);
    if(l%2!=0){
        for(int i=0;i<l;i+=2){
            ch=string[i];
            string[i]=string[i+1];
            string[i+1]=ch;
        }
        printf("%s",string);
    }else{
        printf("Not possible as string length is odd\n");
    }
    return 0;
}
