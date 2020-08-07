/*Ganeshan M
Q6.Write a C program to read the details of a student and to print it. Declare a union ‘student’ with members, name, subject and percentage. Read values from the user and print it.
*/
#include<stdio.h>
union student{
    char name[25];
    char subject[15];
    float percentage;
};
int main()
{
    union student s1;
    char n[25];
    printf("Enter the name of student ");
    scanf("%s",s1.name);

    printf("Enter the subject name: ");
    scanf("%s",s1.subject);
    printf("Enter the percentage: ");
    scanf("%f",&s1.percentage);
    printf("\nName of student: %s\n",s1.name);
    printf("Subject: %s\n",s1.subject);
    printf("Percentage: %f\n",s1.percentage);

    return 0;
}