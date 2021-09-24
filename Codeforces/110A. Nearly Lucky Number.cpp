#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    scanf("%s",&ch);
    int i,c=0,d=0;


   for(i=0; i<=strlen(ch); i++)
   {
       if(ch[i]=='4' || ch[i]=='7' )
       {
           c++;
       }

  }
  if(c==4 || c==7)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }
    }
 
