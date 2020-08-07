/*GAneshan M
AM.EN.U4CSE19320
home work Q1
*/
#include<stdio.h>

struct student{
    int roll;//structure members;
    char *name;
    float marks;
};
int main(){
    struct student s1;//stucture var
    s1.roll=10;
    s1.marks=90;
    printf("%d\n",s1.roll);
    printf("%f\n",s1.marks);
    // return 0;

}