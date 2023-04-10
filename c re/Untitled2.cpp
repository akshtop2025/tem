#include<iostream>
using namespace std;

class swp
{
	
	public:
		
		
			int a,b,c;
		void input()
		{
		
	
		
		cout<<"enter number :";
		cin>>a>>b;
			
		}
	
};

class li:public swp
{
	
	public:
		
		void add()
		{
		
		cout<<"a+b:"<<a+b;
		}
};

main()
{
	li obj;
	obj.input();
	obj.add();
}
