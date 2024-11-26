#include<iostream>
using namespace std;
template<typename T>T swapping(T &a,T &b)
{
 T temp;
 temp=a;
 a=b;
 b=temp;
}
int main()
{
 int x,y;
 float p,q;
 cout<<"ENTER VALUE OF X AND Y\n";
 cin>>x>>y;
 swapping<int>(x,y);
 cout<<"value of x and y after swapping:"<<x<<" ,"<<y<<endl;
 cout<<"ENTER VALUE OF P AND Q\n";
 cin>>p>>q;
 swapping<float>(p,q);
 cout<<"value of p and q after swapping:"<<p<<", "<<q<<endl;
 return 0;
}
