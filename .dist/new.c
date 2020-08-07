#include<stdio.h>
void print(int n)
{
     if(n==0) return;
     else
     {
          print(n-1);
          print(n);
     }
}
