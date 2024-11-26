#include<iostream>
using namespace std;
template<class T>
class A
{
 T a;
 T b;
public:
 A(T x , T y)
 {
 a=x;
 b=y;
 }
 void display()
 {
 cout<<" The value of a and b are:"<<a<<" ,"<<b<<endl;
 }
};
int main()
{
 A<int>d(7,2);
 d.display();
 return 0;
}

