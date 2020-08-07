
/*Ganeshan M
AM.EN.U4CSE19320

Repplace a substring*/
#include <stdio.h>
void rep(char *, char *, char *);
int main()
{
    int MAX = 100;
    char s1[MAX], s2[MAX], s3[MAX];
    printf("Enter text: ");
    fgets(s1, MAX, stdin);
    printf(" word  replaced: ");
    fgets(s2, MAX, stdin);
    printf("replacement word: ");
    fgets(s3, MAX, stdin);
    rep(s1, s2, s3);
}

void rep(char *s1, char *s2, char *s3)
{
    int i, j, l1, l2, l3, flag = 0, k, cnt = 0;
    for (l1 = 0; s1[l1] != '\0'; ++l1);
    for (l2 = 0; s2[l2] != '\0'; ++l2);
    for (l3 = 0; s3[l3] != '\0'; ++l3);
    l1--;l2--;l3--; 
    for (i = 0; i < l1; i++)
    {
        if (s1[i] == s2[0])
        {
            for (j = 0; j < l2; j++)
            {
                if (s1[i + j] == s2[j])
                    flag = 1;
                else
                    flag = 0;
            }
        }
        if (flag)
        {
            for (k = i; k <= i + j + 1; k++)
            {
                s1[k] = s1[i + j + cnt + 1];
                s1[i + j + cnt + 1] = '\0';
                cnt++;
            }
            cnt=0;
            for(k=0;k<i;k++){
                printf("%c",s1[k]);
            }
            for(k=0;k<l3;k++){
                printf("%c",s3[k]);
            }
            printf(" ");
            for(k=i;s1[k]!='\0';k++){
                printf("%c",s1[k]);
            }
            printf("\n");
        }
    }
    if (!flag)
        printf("Word Not found\n");
}