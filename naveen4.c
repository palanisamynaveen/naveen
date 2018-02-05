#include<stdio.h>
#include<conio.h>
int main()
{
int i,flag,n=0;
printf("enter the ineger");
scanf("%d",&n);
for(i=0;i<=n/2;++i)
{
if(n%i==0)
{
flag=0;
break;
}
}
if(flag==0)
{
printf("the number is a prime");
}
else
{
printf("the number is not a prime");
}
getch();
return 0;
}
