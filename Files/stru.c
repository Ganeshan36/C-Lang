#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct person{
    int id;
    char fname[20];
    char lname[20];
};
int main(){
    FILE *outfile,*infile;
    int f=0,d=0;
    outfile=fopen("person.dat","w");
    if(outfile==NULL){
        fprintf(stderr,"\nError In File\n");
        exit(1);
    }
    struct person input1={1,"Rohit","Sharma"};
    struct person input2={2,"Mahendra","Dhoni"};
    f=fwrite(&input1,sizeof(struct person),1,outfile);
    d=fwrite(&input2,sizeof(struct person),1,outfile);
    if((f!=0)&&(d!=0)){
        printf("Contents of file written sucessfully !\n");
    }else{
        printf("Error writing file!\n");
    }
    fclose(outfile);
    struct person input;
    infile=fopen("person.dat","r");
    if(infile==NULL){
        fprintf(stderr,"\nError opening file\n");
        exit(1);
    }
    while(fread(&input,sizeof(struct person),1,infile))
    printf("id =%d name =%s %s \n",input.id,input.fname,input.lname);
    fclose(infile);
    return 0;
}