//enum weekdays

#include<stdio.h>
#include <stdlib.h>
enum week{Sunday=1,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};


int main()
{
    enum week d;
    printf("Enter a number between 1 to 7 : ");
    int n;
    scanf("%d",&n);
    d=n;
    char* getDayName(enum week day)
{
    switch(day)
    {
        case 1: 
        return "Sunday";
        case 2: 
        return "Monday";
        case 3: 
        return "Tuesday";
        case 4: 
        return "Wednesday";
        case 5: 
        return "Thursday";
        case 6: 
        return "Friday";
        case 7: 
        return "Saturday";
        default: exit(0);
    }
}
    printf("%s\n",getDayName(d));
    return 0;
}