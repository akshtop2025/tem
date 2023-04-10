/*Define a class to represent a bank account. Include the following members:
1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account 
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance */
#include<iostream>
using namespace std;

class acc
{
	public:
		 float acnum,bl,wh,de;
		 char ty[15],name[20];
		 
		 void inputdata()
		 {
		 	cout<<"enter depositor name:";
		 	cin>>name;
		 	
		 	
		 	cout<<"Enter Account number :";
		 	cin>>acnum;
		 	
//		 	cout<<"Enter Balance :";
//		 	cin>>bl;
			cout<<"\nAccount Type :";
		 	cin>>ty;
		 }
};

class dll :public acc
{


	public:
			void getdata()
			{
				
				cout<<"Enter  Balance :";
				cin>>de;
				
				cout<<"\n Account Balance "<<de;
				
				cout<<"\n withdraw  mony ";
				cin>>wh;
				bl=de-wh;
				
				cout<<"\n--------------\n ";
				cout<<"\n Account holder name "<<name;
				
				cout<<"\n balance is :"<<bl;
				
				       
				
			}
};

main()
{
	dll bj;
	bj.inputdata();
	bj. getdata();
}
