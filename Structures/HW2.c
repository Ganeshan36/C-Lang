/*GAneshan M
AM.EN.U4CSE19320
home work Q2
*/
#include<stdio.h>
struct student{
    int roll;
    char *name;
    float marks;
};
int main(){
    struct student s1;
    s1.name ="Ganesh";
    s1.roll=10;
    s1.marks=90;
    printf("%d\t%s\t%f\n",s1.roll,s1.name,s1.marks);
    return 0;
}