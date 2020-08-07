#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int l,r,d,u,x,y,xl,yd,xr,yu;
    while(n--){
    int ans=1;
    scanf("%d%d%d%d",&l,&r,&d,&u);
    scanf("%d%d%d%d%d%d",&x,&y,&xl,&yd,&xr,&yu);
    if(r-l>xr-x||l-r>x-xl){
       ans=0;
    }else if (u-d >yu-y || d-u >y-yd){
        ans=0;
    }else if (xl==xr&&(l+r)>0){
        ans=0;
    }else if(yd==yu && (d+u)>0){
        ans=0;
    }
    if(ans==1){
        printf("yes\n");
    }else{
        printf("no\n");
    }
}
    return 0;
}