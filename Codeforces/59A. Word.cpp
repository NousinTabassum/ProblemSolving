#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char ch[100];
    int i ,len=0,len2=0;
    scanf("%s",&ch);
    for( i=0; ch[i]!='\0'; i++)
    {
        if(ch[i]>='A' && ch[i]<='Z')
        {
             len++;
        }
       else if(ch[i]>='a' && ch[i]<='z')
        {
             len2++;
        }

    }

    for( i=0; ch[i]!='\0'; i++)
    {
        if(len>len2)
        {
            ch[i]=toupper(ch[i]);
        }
        else
        {
            ch[i]=tolower(ch[i]);
        }
    }
    printf("%s",ch);


    return 0;


}
