#include<stdio.h>
#include<string.h>
void chat(char []);
int main()
{
    int i;
    char a[100];
    scanf("%s",a);
    chat(a);
    return 0;
}
void chat(char a[]){
    int n=strlen(a);
    int l=0;
    for (int i=0;i<n;i++)
    {
     if (a[i]=='h' && l==0) l++;
     else if (a[i]=='e' && l==1) l++;
     else if (a[i]=='l' && l==2) l++;
     else if (a[i]=='l' && l==3) l++;
     else if (a[i]=='o' && l==4) l++;
     if(l==5) break;
    }
      if (l==5) printf("YES\n");
      else printf("NO\n");
}
      
