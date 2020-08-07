#include<stdio.h>
int main(){
int n,m,o;
scanf("%d%d%d",&n,&m,&o);
if(n<m &&n<o){
printf("%d\n",n);}
else if(m<n &&m<o){printf("%d\n",m);}
else{printf("%d\n",o);
}
}