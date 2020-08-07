//1.Writeaprogramtointerchangethelargestandthesmallestnumberinthearray.*/
/*C Lab Assignment
Ganeshan M
S2 CSE D
AM.EN.U4CSE19320*/

#include<stdio.h>
#define s 100
int interchange(int [],int);
int main(){
    int a[s],max,min,n;
    printf("Program to Interchange Largest and smallest value:\n");
    printf("Enter the No of elements in an Array:");
    scanf("%d",&n);
    printf("Enter the Array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    interchange(a,n);
    printf("\n");
}
int interchange(int a[],int n){
    int max,min;
    max=a[0];
    min=a[0];
    int maxp=0;
    int minp=0;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            maxp=i;
        }if(a[i]>max){
            max=a[i];
            minp=i;
        }
    }
    int temp;
    temp=a[maxp];
    a[maxp]=a[minp];
    a[minp]=temp;
    printf("Array after Interchanging Values:");
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);

    }
}