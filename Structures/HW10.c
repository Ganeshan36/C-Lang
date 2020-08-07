/*GAneshan M
AM.EN.U4CSE19320
home work Q10
*/
#include <stdio.h>
#include<stdlib.h>
int main(){
    int i=0,n=0;
    printf("Enter max:");
    scanf("%d",&n);
    int*ptr;
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i){
        ptr[i]=i;
    }
    printf("the elements of the array are:");
    for(i=0;i<n;++i){
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    return 0;
    
} 