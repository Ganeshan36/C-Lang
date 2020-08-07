 #include<string.h>
 #include<stdio.h>
 int main(){
    int i,a=0;
    char s[100];
    scanf("%s",s);
    int l;
    l=strlen(s);
    int m=l/2;
    for(i=0;i<=l;i++){
        if(s[i]=='a'){
        a++;
    }
}
if(l<2*a-1){
    printf("%d",l);
}else{
    printf("%d",2*a-1);
}
}