#include<iostream>
using namespace std;
int main()
{
 try
 {
 int x;
 cout<<"Enter the value of x";
 cin>>x;
 //a=x%2==0;
 // b=y%2==0;
 if(x%2==0)
 {
 cout<<"\nNO. ARE EVEN= ";
 cout<<x;
 }
 else
 throw x;
 }
 catch (int a)
 {
 cout<<"\n NO.ARE ODD";
 }
}

