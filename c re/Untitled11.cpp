#include<stdio.h>
int main()
{
	float a,b,ans=0;
	char c;
	
	printf("Enter your choice \n 1 for '+' \n 2 for '-' \n 3 for '*' \n 4 for '/' ");
	scanf("%c",&c);
	
	switch(c)
	{
		case '1':
			{
				printf("enter two number : ");
				scanf("%f%f",&a,&b);
				ans=a+b;
				printf("a+b is :%0.2f ",ans);
				break;
			}
		
		case '2':
			{
				printf("enter two number : ");
				scanf("%f%f",&a,&b);
				ans=a-b;
				printf("a+b is %f: ",ans);
				break;
			}
			
			case '3':
			{
				printf("enter two number : ");
				scanf("%f%f",&a,&b);
				ans=a+b;
				printf("a*b is %f : ",ans);
				break;
			}
		
			case '4':
			{
				printf("enter two number : ");
				scanf("%f%f",&a,&b);
				ans=a/b;
				printf("a+b is %f : ",ans);
				break;
			}
			
			
	}
	
	
	
}
