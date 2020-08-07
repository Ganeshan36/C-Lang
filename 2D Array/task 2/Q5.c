//Ganeshan M
//Am.En.U4CSE19320 S2 CSE D 
//Job
#include <stdio.h>
void job_assignment(int a[][10],int n){
    int i,j,avail[n],pos,min;
	char ch='A';
	for(i=0;i<n;i++)
		avail[i]=1;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(avail[j])
				{min=a[i][j];
				pos=j;}
		for(j=0;j<n;j++){
			if(min>a[i][j] && avail[j]){
				min=a[i][j];
				pos=j;
			}
		}
		printf("Job %d is given to worker %c \n",pos+1,ch+i);
        avail[pos]=0;
	}
}
		
	
int main(){
    int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
    }
	printf("\n");
	job_assignment(a,n);
}
