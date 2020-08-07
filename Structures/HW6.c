/*GAneshan M
AM.EN.U4CSE19320
home work Q6
*/
#include<stdio.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s1[50];
    int i=0;
    for(int i=0;i<3;i++){
        printf("Enter the Roll NO:");
        scanf("%d",&s1[i].roll);
        printf("Enter the Name:");
        scanf("%s",s1[i].name);
        printf("Enter the marks:");
        scanf("%f",&s1[i].marks);
    }
    for(int i=0;i<3;i++){
        printf("Roll No is :%d\t",s1[i].roll);
        printf("First name is %s\t",s1[i].name);
        printf("Marks is %f\n",s1[i].marks);
    }
}