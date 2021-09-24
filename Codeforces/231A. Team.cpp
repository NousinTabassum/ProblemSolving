#include<stdio.h>
int main()
{
int t,a,b,c,i=0;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&a,&b,&c);
if(a+b+c>=2)
i++;
}
printf("%d",i);
}
