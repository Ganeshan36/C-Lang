//Ganeshan M
//Am.En.U4CSE19320 S2 CSE D 
//Binary Matrix Transformation
#include <stdio.h>
int A=0,B=0;
void transform(int limit1a,int limit1b,int limit0a,int limit0b,int k,int r,int c,int a[][c])
{int i,j,A,B,b[r][c],g;
	for(g=0;g<k;g++){
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(a[i][j]==1){
				
				if(j-1>=0 && i-1>=0 && a[i-1][j-1]==1)
					A++;
				if(i-1>=0 && a[i-1][j]==1)
					A++;
				if(j+1<c && i-1>=0 && a[i-1][j+1]==1)
					A++;
				if(j-1>=0 && a[i][j-1]==1)
					A++;
				if(j+1<c &&  a[i][j+1]==1)
					A++;
				if(j-1>=0 && i+1<r && a[i+1][j-1]==1)
					A++;
				if(i+1<r && a[i+1][j]==1)
					A++;
				if(j+1<c && i+1<r && a[i+1][j+1]==1)
					A++;	
				if(A>=limit1a && A<=limit1b)
					b[i][j]=1;
				else
					b[i][j]=0;
			}else{

				if(j-1>=0 && i-1>=0 && a[i-1][j-1]==1)
					B++;
				if(i-1>=0 && a[i-1][j]==1)
					B++;
				if(j+1<c && i-1>=0 && a[i-1][j+1]==1)
					B++;
				if(j-1>=0 && a[i][j-1]==1)
					B++;
				if(j+1<c &&  a[i][j+1]==1)
					B++;
				if(j-1>=0 && i+1<r && a[i+1][j-1]==1)
					B++;
				if(i+1<r && a[i+1][j]==1)
					B++;
				if(j+1<c && i+1<r && a[i+1][j+1]==1)
					B++;	
				if(B>=limit0a && B<=limit0b)
					b[i][j]=1;
				else
					b[i][j]=0;
			}
			
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			a[i][j]=b[i][j];
		}
	}
}

}				
int main(){
    int limit1a,limit1b,limit0a,limit0b,k,r,c,i,j;
	printf("Enter limit1a: ");
	scanf("%d",&limit1a);
	printf("Enter limit1b: ");
	scanf("%d",&limit1b);
	printf("Enter limit0a: ");
	scanf("%d",&limit0a);
	printf("Enter limit0b: ");
	scanf("%d",&limit0b);
	printf("Enter the value of k: ");
	scanf("%d",&k);	
	printf("Enter row and column size: ");
	scanf("%d %d",&r,&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	transform(limit1a,limit1b,limit0a,limit0b,k,r,c,a);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
