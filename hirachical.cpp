#include<iostream>

using namespace std;
class info
{
	protected:
		int accno,salary;
		char name[40],surn[20];
		public:
			void enter()
			{
				cout<<"\nenter name,surname & account no & salary"<<endl;
				cin>>name>>surn>>accno>>salary;
			}
};
class loans:public info
{
	protected:
		int emi;
		public:
			void count()
			{
				cout<<"Name:"<<name<<" "<<surn<<endl<<"Account no:"<<accno;
				emi=salary*15/100;
				cout<<endl<<"Total salary:"<<salary-emi;
			}
} ;
class dbonus:public info
{
	protected:
		int bonus;
		public:
			void total()
			{cout<<"Name:"<<name<<" "<<surn<<endl<<"Account no:"<<accno<<endl;
				cout<<"Diwali salary with additional bonus salary:";
				bonus=salary*20/100;
				cout<<bonus+salary;
			}
};
int main()
{
	loans l;
	l.enter();
	l.count();
	dbonus d;
	d.enter();
	d.total();
}
