#include<iostream>
using namespace std;

class binary
{
 int a, b, c;
public:
 binary(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z) {}
 binary operator+(binary& p)
 {
  binary temp;
  temp.a = a + p.a;
  temp.b = b + p.b;
  temp.c = c + p.c;
  return temp;
 }
 void display()
 {
  cout << "The result is = " << a << endl;
  cout << "The result is = " << b << endl;
  cout << "The result is = " << c << endl;
 }
};

int main()
{
 int x1, y1, z1, x2, y2, z2;
 cout << "Enter the values for first binary number: ";
 cin >> x1 >> y1 >> z1;
 cout << "Enter the values for second binary number: ";
 cin >> x2 >> y2 >> z2;

 binary p(x1, y1, z1);
 binary q(x2, y2, z2);
 binary r = p + q;
 r.display();

 return 0;
}
