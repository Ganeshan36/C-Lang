#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,l;
    char ch[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ch);
        l=strlen(ch);
    for(int i=0;i<l;i++){
        if(i%2==0){
            printf("%c",ch[i]);
        }
        printf("  ");
        for(int i=0;i<l;i++)
        if(i%2!=0)
        printf("%c",ch[i]);
    }
    printf("\n");
}
}
