#include<stdio.h>
int main()
{
	int n,i,counteven=0,countodd=0,sumeven=0,sumodd=0;
	
	for(i=1;i<=10;i++)
	{
		printf("enter number :",i);
		scanf("%d",&n);
		
		if(n%2==0)
		{
			counteven++;
			sumeven=sumeven+n;
		}
		else
		{
			countodd++;
			sumodd=sumodd+n;
		}
	}
	printf("totel number of even is :%d\n",counteven);
	printf("totel number of odd is :%d\n",countodd);
	printf("totel number even of sum is :%d\n",sumeven);
	printf("totel number odd of sum is :%d\n",sumodd);
	
	return 0;
}

