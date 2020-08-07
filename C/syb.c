#include<stdio.h>
int main(){
    int n,c,l;
    char s[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%s",&l,s);
        for(int j=0;j<l;j++){
            for(int k=0;k<l;k++)
            if(s[j]==s[k+1]);
            c++;
                    if(c%2==0){
            printf("YES\n");
            break;
        }else{
            printf("NO\n");
            break;
        }
        }
    }
}