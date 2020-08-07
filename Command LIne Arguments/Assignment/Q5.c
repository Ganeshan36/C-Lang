
/*Ganeshan M
Q5.5.Write a c program to find the area of a rectangle using macro.
*/
#include<stdio.h>
#define recArea(l,b) (l*b)
int main(){
    float l,b;
    printf("Enter the length and breadth: ");
    scanf("%f%f",&l,&b);
    printf("The area of rectangle is %f\n",recArea(l,b));
}