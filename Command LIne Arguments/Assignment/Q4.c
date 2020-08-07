
/*Ganeshan M
Q   Write a C program to print the corresponding days of a week using switch-case. The days of the week should be declared as an enumwith values starting from 1 for Sunday. 4
*/
#include<stdio.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)

int main(){
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    printf("The area of circle is %f\n",circleArea(r));
}