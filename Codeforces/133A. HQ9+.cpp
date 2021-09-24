#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    scanf("%s",&ch);
    int c=0,d=0;
    for(int i=0; i<strlen(ch); i++)
    {
        if(ch[i]=='H' || ch[i]=='Q' || ch[i]=='9')
        {
           c++;
        }
        else
        {
            d++;
        }
    }
    if(c>0)
    {
        printf("YES");
    }
    if(d==strlen(ch))
    {
        printf("NO");
    }


}
