#include <stdio.h>
void concatenate(char *, char *,char *);

int main()
{
   char p[100], q[100],r[100];

   printf("Input a string\n");
   fgets(p,100,stdin);

   printf("Input a string to concatenate\n");
   fgets(q,100,stdin);
   concatenate(p, q,r);

   printf("String obtained on concatenation: \"%s\"\n", r);

   return 0;
}
void concatenate(char *p, char *q,char *r) {
   int c, d;
   c = 0;
   while (p[c] != '\0') {
     r[c++]=p[d++];
   }
   c=0;
   while(q[c]!='\0'){
     r[d++]=q[c++];
   }
   r[d] = '\0';
}
