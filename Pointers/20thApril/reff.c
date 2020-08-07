#include<stdio.h>
void loop(int *i){
    while(*i<5){
        *i++;
        printf("vaue of i id %d\n",*i);
    }
}
int main() {
    int x=1;
    loop(&x);
    return 0;
}