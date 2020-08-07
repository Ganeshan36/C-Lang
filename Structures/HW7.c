/*GAneshan M
AM.EN.U4CSE19320
home work Q7
*/
#include<stdio.h>
struct student{
    int roll=20;
    char name[20]="Ganesh";
    float marks=2;
};
int main(){
    struct student s1;
    printf("%d",s1.roll);
}
/*//HW7.c:3:13: error: expected ‘:’, ‘,’, ‘;’, ‘}’ or ‘__attribute__’ before ‘’ token
    3 |     int roll=20;
      |             ^
HW7.c: In function ‘main’:
HW7.c:9:19: error: ‘struct student’ has no member named ‘roll’
    9 |     printf("%d",s1.roll);*/
