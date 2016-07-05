#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i=0;
clrscr();
scanf("%d %d",&a,&b);
while(a>=b)
{
a=a-b;
i++;
}
printf("The quotient is %d and the remainder is %d",i,a);
getch();
}
