/*GAneshan M
AM.EN.U4CSE19320
home work Q3
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
    struct s s1;
    s1.numerical_code=10;
    printf("%d",s1.numerical_code);

}
//structure variable not declared for subject 