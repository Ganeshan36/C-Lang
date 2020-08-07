/*
Write a C Program to find whether the strings passed as command line arguments, are palindrome or not.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void str_palindrome(char str[])
{
    int l = 0;
    int x= strlen(str)-1;
    while (x> l){
        if (str[l++] != str[x--]){
            printf("%s is Not Palindrome\n", str);
            return;
            }
    }
    printf("%s is palindrome\n", str);
}

int main(int argc, char *argv[])
{
    int i,k;
    int strsize = 0;
    for (i=1; i<argc; i++) {
        strsize += strlen(argv[i]);
        if (argc > i+1)
        strsize++;
        }
        char *str;
        str = malloc(strsize);
        str[0] = '\0';
        for (k=1; k<argc; k++) {
            strcat(str, argv[k]);
            if (argc > k+1)
            strcat(str, " ");
            }
str_palindrome(str);

}