/*
GWrite a C Program to find the sum of digits of a number, using command line arguments.*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    int num, temp, digit, sum = 0;
    if(argc ==1)
    {
         printf("Enter the number\n");
         exit(1);
    }
    if(argc>=2){
    num = atoi (argv[1]) ;
    temp = num;
    while (num > 0)
    {
        digit = num % 10;
        sum  = sum + digit;
        num /= 10;
    }
    printf("Sum of the digits of %d = %d\n", temp, sum);
    }
}