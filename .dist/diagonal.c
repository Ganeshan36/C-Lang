#include<stdio.h>
int min(int m,int n){
    if(m<n){
        return m;
    }
    else{
        return n;
    }
}


int main()
{
int m,n,count=0;
scanf("%d %d",&m,&n);  
for (int i = 1; i <= ((min(m,n))/2)+1; i++) //i divided min(m,n) by 2 to make it efficient.
{

    if ((m%i == 0) && (n%i == 0))
    {
        count++;
    }

}
if (((n%m == 0) || (m%n == 0)) && (n!=m))
{
   printf("%d\n",count);
}

printf("%d",count);  //cout<<count;

return 0;
}