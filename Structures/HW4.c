/*GAneshan M
AM.EN.U4CSE19320
home work Q4
*/
#include<stdio.h>
struct s{
    int roll;
    char *name;
    float marks;
};
struct subject{
    char *name;
    int numerical_code;
};
int main(){
    struct subject s1;//declare a struct variable for subject
    s1.numerical_code=10;
    printf("%d",s1.numerical_code);

}