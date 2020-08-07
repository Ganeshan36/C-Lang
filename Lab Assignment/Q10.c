//Imagine  you  are  maintaining  a  deck  of  cards  in  LAST –IN-FIRST  OUT  fashion.  Any  card which is inserted at the end will come out first.  Do a choice based iteration of the following functions.*/

/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320
*/#include <stdio.h>
int peep(int[]);
int insert(int[], int);
int displaydeck(int[]);
int delete (int[]);
int n;
int main()
{
    int array[100];
    while (1)
    {
        printf("1.INSERT\n2.DISPLAYDECK\n3.DELETE\n4.PEEP\n");
        int c;
        scanf("%d", &c);
        switch (c)
        {
            int input;
        case 1:
            printf("Enter element to insert: ");
            scanf("%d", &input);
            insert(array, input);
            displaydeck(array);
            break;
        case 2:
            displaydeck(array);
            break;
        case 3:
            delete (array);
            displaydeck(array);
            break;
        case 4:
            peep(array);
            break;
            default:
            printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}

int insert(int A[], int a)
{
    ++n;
    for (int i = n; i > 0; i--)
    {
        A[i] = A[i - 1];
    }
    A[0] = a;
}

int displaydeck(int A[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int delete(int A[])
{
    for (int i = 0; i < n; i++)
    {
        A[i] = A[i + 1];
    }
    if(n!=0)
        --n;
}
int peep(int A[])
{
    printf(" %d ", A[0]);
}