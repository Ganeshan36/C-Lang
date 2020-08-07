//Ganeshan M
//Write a program in C to create a student database using files and structure concept. Use the structure Student to represent a student. The Student structure must have fields like name, roll no, age and CGPA. The program must allow the users to do the following operations.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    int rollno;
    char name[30];
    int age;
    float CGPA;
};
void add_stud(){
    FILE *fptr;
    struct student s2;
    if ((fptr = fopen("Student.txt", "ab+")) == NULL){
        printf("the file could not be opened\n");
        exit(1);
    }
    printf("Add Student Details\n");

    printf("Enter the Name of student:");
    scanf("%s", s2.name);
    printf("Enter the rollno of student:");
    scanf("%d", &s2.rollno);
    printf("Enter the age of student:");
    scanf("%d", &s2.age);
    printf("Enter the CGPA of student:");
    scanf("%f", &s2.CGPA);
    fwrite(&s2, sizeof(s2), 1, fptr);
    fclose(fptr);
}
void display_stud(struct student *s2){
    printf("the Name of student:%s\n", s2->name);
    printf("the age of student:%d\n", s2->age);
    printf(" the rollno-no of student:%d\n", s2->rollno);
    printf("the CGPA of student:%f\n", s2->CGPA);

    return;
}


void Searchstudent(){
    FILE *fptr = NULL;
    struct student stud;

    if ((fptr = fopen("Student.txt", "rb")) == NULL){
        printf("couldn't open file\n");
        return;
    }
    int roll;
    printf("enter the rollno no to search\n");
    scanf("%d", &roll);
    while (fread(&stud, sizeof(stud), 1, fptr) == 1)
    {
        if (roll == stud.rollno)
        {
            display_stud(&stud);
        }
    }
    fclose(fptr);

    return;
}



void Updatestudent()
{
    FILE *fptr = NULL;
    FILE *tmp = NULL;
    struct student stud;
    tmp = fopen("temp.txt", "wb");
    if ((fptr = fopen("Student.txt", "rb")) == NULL)
    {
        printf("couldn't open file\n");
        return;
    }
    int rollno;
    printf("enter the rollno no to search\n");
    scanf("%d", &rollno);
    rewind(fptr); 
    while (fread(&stud, sizeof(stud), 1, fptr) == 1){
        if (rollno == stud.rollno){
            printf("yes\n");
            printf("Enter the Name of student:\n");
            scanf("%s", stud.name);
            printf("Enter the age of student:\n");
            scanf("%d", &stud.age);
            printf("Enter the CGPA of student:\n");
            scanf("%f", &stud.CGPA);
            fwrite(&stud, sizeof(stud), 1, tmp);
        }

        else {
            fwrite(&stud, sizeof(stud), 1, tmp);
        }
    }
    fclose(fptr);
    fclose(tmp);
    remove("Student.txt");             
    rename("temp.txt", "Student.txt");

    return;
}


void delete_stud(){
    FILE *fptr = NULL;
    FILE *tmp = NULL;
    struct student stud;
    tmp = fopen("temp.txt", "wb");
    if ((fptr = fopen("Student.txt", "rb")) == NULL){
        printf("couldn't open file\n");
        return;
    }
    else{
        printf("ready to read.\n");
    }
    int r;
    printf("enter the rollno no to search\n");
    scanf("%d", &r);
    rewind(fptr);
    while (fread(&stud, sizeof(stud), 1, fptr) == 1){
        display_stud(&stud);
        printf("--------------\n");
        if (r != stud.rollno)
        {
            fwrite(&stud, sizeof(stud), 1, tmp);
        }
    }
    fclose(fptr);
    fclose(tmp);
    remove("Student.txt");             
    rename("temp.txt", "Student.txt"); 

    return;
}

void countStudent(){
    FILE *fptr = NULL;
    struct student stud;
    int count = 0;
    if ((fptr = fopen("Student.txt", "rb")) == NULL){
        printf("couldn't open file\n");
        return;
    }
    else{
        printf("ready to read.\n");
    }
    while (fread(&stud, sizeof(stud), 1, fptr) == 1){
        count++;
    }
    fclose(fptr);
    printf("the count is %d\n", count);

    return;
}

int main(){

    int choice, i = 0;
    char ch;
    printf("Enter the choice you want\n");
    printf("-----CHOICE-----\n");
    printf("1. Add student detail\n2. Update Student details\n3. Search with rollno no\n4. Count nof students\n5. Delete student\n");
    scanf("%d", &choice);
    do{

        switch (choice)
        {
        case 1:
            add_stud();
            break;
        case 2:
            Updatestudent();
            break;
        case 3:
            Searchstudent();
            break;
        case 4:
            countStudent();
            break;
        case 5:
            delete_stud();
            break;
        default:
            printf("invalid choice");
            break;
        }
        printf("Enter the choice you want\n");
        printf("CHOICE\n");
        printf("1. Add student detail\n2. Update details\n 3. Search with rollno no\n 4. Count nof students\n5. Delete student\n");
        scanf("%d", &choice);

    } while (choice >= 1 && choice <= 5);
}