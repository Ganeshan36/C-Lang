/*GAneshan M
AM.EN.U4CSE19320
home work Q8
*/
#include<stdio.h>
struct student {
    int roll;
};
int main(){
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    ptr->roll=10;
    printf("%d",ptr->roll);
    return 0;
}