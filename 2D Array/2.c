#include<stdio.h>
int main() {
    int i,j;
    int Arr[3][4]={{11,22,33,44},{55,66,77,88},{11,22,3,3}};
    for(int i=0;i<3;i++){
        printf("Address of %d th array %ls \n",i,*(Arr+i));
        for(int j=0;j<4;j++)
            printf(" Arr[%d][%d]=%d\t",i,j,*(*(Arr+i)+j));
        printf("\n\n");
    }
    return 0;
}