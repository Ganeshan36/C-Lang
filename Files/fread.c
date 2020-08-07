#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n=50;
    char name[]="Ganesh";
    FILE *ptr=fopen("ha.dat","w");
    fwrite(name,sizeof(char),strlen(name)+1,ptr);
    fwrite(&n,sizeof(int),1,ptr);
    fclose(ptr);
    int tn;
    char tempname[7];
    ptr=fopen("ha.dat","r");
    fread(tempname,sizeof(char),strlen(name)+1,ptr);
    fread(&tn,sizeof(int ),1,ptr);
    fclose(ptr);
    printf("temp name=%s,tempnumb =%d",tempname,tn);
}