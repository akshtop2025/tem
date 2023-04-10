#include<iostream>
using namespace std;

class student{
	public :
		int rollno;
		float per;
		
		void get_data(int a,float b)
		{
			
			rollno=a;
			per=b;
			
			
		}
};

class re :public student{
	
	public:
		
		
		int marks;
		void getin(int c)
		
		{
			marks=c;
			
			
		}
		
		void print_data()
		{
			
			cout<<"\nrllno : "<<rollno;
			cout<<"\nper : "<<per;
			cout<<"\n marks : "<<marks;
			
		}
};
main()
{
	
	re r;
	r.get_data(21,45);
	r.getin(56);
	r.print_data();
}
