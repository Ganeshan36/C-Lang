#include<stdio.h>
int main(){
    char c[]="abcd";
    char c1[50]="abcd";
    char c2[]={'H','A','p','p','Y','\0'};
    printf("%ld\t%ld\t%ld\n",sizeof(c),sizeof(c1),sizeof(c2));
    printf("%s\t%s\t%s\n",c,c1,c2);
}