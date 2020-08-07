/*GAneshan M
AM.EN.U4CSE19320
home work Q11
*/
#include <stdio.h>
int main(){
    int i=0,n=0;
    printf("Enter number:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=i;
    }
    for(i=0;i<n;++i){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}