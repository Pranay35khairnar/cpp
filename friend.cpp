#include<iostream>
using namespace std;
class frend
{
private:
 int length;
public:
 frend():
 length(20) { }
 friend int printLength(frend);
};
int printLength(frend f)
{
 f.length+=40;
 return f.length;
}
int main()
{
 frend f;
 cout<<"Length of box="<<printLength(f)<<endl;
 return 0;
}
