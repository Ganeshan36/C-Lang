//Using arrays helpa Car service centre serve cars based on aQUEUE which follows aFirst Come first Serve order.
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
*/
#include <stdio.h>
#define MAX 50
void insert();
void delete();
void display();
void next();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice ;
    while (1)
    {      
        printf("1.INSERT \n");
        printf("2.DELETE \n");
        printf("3.QUEUE STATUS:   \n");
        printf("4.Who Next\n");
        printf("5.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            next();
            break;
            case 5:
            default:
            printf("Wrong choice \n");
            break;
        } 
    } 
} 
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Element to be inserted at end of Queue: ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
} 
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf(" deleted element is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
void next(){
    printf("%d\n",queue_array[0]);
}