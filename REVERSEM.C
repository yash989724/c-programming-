#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,r=0;
printf("enter no");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
r=r*10+m;
n=n/10;
}
printf("reversem of no=%d",r);
getch();
}