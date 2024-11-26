#include<iostream>
using namespace std;
class employee
{
	protected:
		char name[50],surname[50];
		int eid;
		public:
			void getd()
			{
				cout<<"enter name&surname eid";
				cin>>name>>surname>>eid;
			}
			
};
class salary: public employee
{
	protected:
		char sn[50];
		long int sal;
		public:
			void getinfo()
			{
				cout<<"enter a special name & salary";
				cin>>sn>>sal;
			}
};
class workingbon:public salary
{
	protected:
		int totalsal,bonus;
		public:
			void gettotal()
			{
				cout<<"enter a bonus amt";
				cin>>bonus;
				totalsal=(sal*bonus/200000)+sal;
				
				
			}
			void final()
			{
				cout<<name<<" "<<surname;
				cout<<endl<<eid<<endl<<sn<<endl<<sal<<endl;
				cout<<"total salary="<<totalsal;
			}
};
int main()
{
workingbon e;
e.getd();
e.getinfo();
e.gettotal();
e.final();

}
