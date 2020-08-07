/*GAneshan M
AM.EN.U4CSE19320
home work Q5
*/
#include<stdio.h>
struct student{
    int roll;
    char *name;
    float marks;
};
struct subject{
    int numerical_code;
    float marks;
};
int main(){
    printf("%ld\n",sizeof(struct student));
    printf("%ld\n",sizeof(struct subject));
}
//24 
//8