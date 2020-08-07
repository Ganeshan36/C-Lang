#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ptr;
    int i,n=2;
    char str[50];
    ptr=fopen("sample.txt","w");
    if(ptr==NULL){
        printf("Could Not be created");
        return 0;
    }
    for(int i=0;i<n;i++){
        puts("ENter a name:");
        fgets(str,50,stdin);
        fprintf(ptr,"%d. %s\n",i,str);
    }
    fclose(ptr);
}
//fprintf(ptr,"%d.%s\n",i,str);