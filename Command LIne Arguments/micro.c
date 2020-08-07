// #include<stdio.h>
// #define pi 3.14
// // #define i 1
// // #define working 0
// // enum s{f,w,f}v;
// #define pi 3.14
// int main(){
//     printf("%f",pi);
// }
// //function like macros
#include<stdio.h>
#define MIN(a,b)((a)<(b)?(a):(b))
int main(){
    printf("%d",MIN(9,0));
}