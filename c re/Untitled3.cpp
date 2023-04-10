#include<iostream>
using namespace std;

class wap
{
	public:
	float a,b;
	
		void input()
		{
			cout<<"Enter number A and B :";
			cin>>a>>b;
		}
	
	
};

class in :public wap
{
	public:
		
		
		void add()
			{
				
				cout<<"ANS A+B: "<<a+b<<endl;
				cout<<"ANS A-B: "<<a-b<<endl;
				cout<<"ANS A*B: "<<a*b<<endl;
				cout<<"ANS A/B: "<<a/b<<endl;
			}
		
};

main()
{
	in obj;
	obj.input();
	obj.add();
	
}
