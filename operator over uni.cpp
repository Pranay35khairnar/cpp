#include<iostream>
using namespace std;
class ope
{
    int a,b,c;
public:
     ope(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void operator ++()
    {
        a=++a;
        b=++b;
        c=++c;
    }
    void operator --()
    {
        a=--a;
        b=--b;
        c=--c;
    }
    void show()
    {

        cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
    }
    void display()
    {

        cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
    }
};
int main()
{
    int p,q,r;

    cout<<"enter elements"<<endl;
    cin>>p>>q>>r;
    ope o(p,q,r);
    o.operator ++();
    o.show();
    o.operator --();
    o.display();

}

