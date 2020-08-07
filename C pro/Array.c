#include<stdio.h>
int main() {
    int array[20];
    int c[5]={5,4,2,4,11,4}
    char arr[20];
    float a[20];
    double b[20];
    printf("Size of int :%lu bytes\n Size of char is : %lu\n size of float is %lu\nsize of douunle is %lu\n",sizeof(array),sizeof(arr),sizeof(a),sizeof(b));
    
    return 0;
}