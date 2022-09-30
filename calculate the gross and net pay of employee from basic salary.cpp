#include<iostream>
using namespace std;
class employee
{
	public:
		int id;
		string name;
		float salary;
		employee (int i,string n,float s)
			{
				id=i;
				name=n;
				salary=s;
			}
		void display()
			{
				cout<<id<<" "<<name<<" "<<salary;
			}	
};
int main()
{
	int gpay,bsal,da,it,net;
	cout<<"enter the basic salary :: ";
	cin>>bsal; 
	employee e1=employee(102,"subhash",bsal);
	e1.display();
	cout<<"\n";
	da=bsal*0.52;
	cout<<"your da is :: "<<da;
	cout<<"\n";
	gpay=bsal+da;
	cout<<"your gross pay is :: "<<gpay;
	cout<<"\n";
	it=gpay*0.30;
	net=bsal+da-it;
	cout<<"The net pay is :: "<<net;
	cout<<"\n";
	return 0;
}
