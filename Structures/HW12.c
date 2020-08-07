/*GAneshan M
AM.EN.U4CSE19320
home work Q3
//Create a C program that would read the academic record of 5 students. After the record of all the students have been entered, the user should be provided with a menu which has the following:❑Enter ‘1’ to display the names of all the students❑Enter ‘2’ to find the average mark of all the students in Maths❑Enter ‘3’ to search for a particular student based on the roll number
*/
#include<stdio.h>
struct student{
    char name[50];
    int Rollno;
    float Mathsmarks;
    float Sanskritmarks;
    float Programmingmarks;
};

void display(struct student *s){
    for(int i=0;i<5;i++)
    {
        printf("%s ",s[i].name);
    }
}
float avg(struct student *s){
    float x=0;
    for(int i=0;i<5;i++)
    {
        x=x+(s[i].Mathsmarks);
    }
    x=x/5;
    return x;
}
void search(struct student *s){
    int n;
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(s[i].Rollno==n){
            printf("%s:%d\n",s[i].name,n);
            break;
        }
    }
}
int main(){
    struct student s[5];
    int i,choice;
    for(i=0;i<5;i++)
    {
        printf("enter name of the student:");
        scanf("%s",s[i].name);
        printf("enter roll no:");
        scanf("%d",&s[i].Rollno);
        printf("enter marks obtained in maths:");
        scanf("%f",&s[i].Mathsmarks);
        printf("enter marks obtained in sanskrit:");
        scanf("%f",&s[i].Sanskritmarks);
        printf("enter marks obtained in programming:");
        scanf("%f",&s[i].Programmingmarks);
    }
    printf("Enter 1 to display name of all students:\n");
    printf("Enter 2 to display avg of all students in Maths:\n");
    printf("Enter 3 to search for a student based on  the roll no:\n");
    while(1)
    {
        scanf("%d",&choice);
        if(choice==1){
            display(s);
        }
        else if
        (choice==2){
            
            printf("Average marks of all students in Maths is %f\n",avg(s));
        }
        else if(choice==3){
            search(s);
        }

        else
            printf("Invalid Choice");
    }
    return 0;
}