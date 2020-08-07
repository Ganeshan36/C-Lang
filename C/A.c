#include<stdio.h>
int main()
{
   int CSE = 100, *ME = &CSE;
   Amrita(&CSE);
    printf("%d ", *ME);
}
void Amrita(int *ME)
{
   int CSE = 20;
   ME = &CSE;
   printf("%d ", *ME);
}