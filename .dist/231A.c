#include<stdio.h>
int main() {
    int n;
    int p,v,t,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&p,&v,&t);{
            if(p+v+t>=2){
                c++;
            }

        }
    }
    printf("%d\n",c);
    return 0;
}