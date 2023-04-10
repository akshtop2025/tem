#include<stdio.h>
int main()
{
 char oper;
 int num1,num2,ans=0;
 printf("enter any one operator like +,-,*,/,% :");
 scanf("%c",&oper);
 printf("enter the values of operands num1 and num2 :");
 scanf("%d %d",&num1,&num2);
switch(oper)
{
case'+' :ans=num1+num2;
 break;
case'-' :ans=num1-num2;
 break;
case'*' :ans=num1*num2;
 break;
case'/' :ans=num1/num2;
 break;

 case'%' :ans=num1%num2;
 break;
 default :printf("invalid operator ");
}
 printf("The value =%d",ans);

 return 0;
}
