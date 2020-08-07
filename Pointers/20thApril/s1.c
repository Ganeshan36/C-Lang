#include<stdio.h>
int main(){
    int var=10;
    int *p;
    p=&var;
    printf("Address of var is:%p",&var);
     printf("Address of var is:%p",p);
      printf("Value of var is:%d",var);
       printf("Address of var is:%d",*p);
        printf("Address of var is:%p",&var);
}