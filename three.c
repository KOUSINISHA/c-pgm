#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();

printf("\n enter the value of a:");
 scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n enter the value of c:");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("\n the number %d is greatest among 3 numbers",a);
}
else if(b>a&&b>c)
{
printf("\n the number %d is greatest among 3 numbers",b);
}
else 
printf("\n the number %d is greatest among 3 numbers",c);
}
return 0;
}
