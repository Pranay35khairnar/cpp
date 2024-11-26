#include<iostream>
using namespace std;
class student
{
 
 int roll_no;
 string name;
 int marks;
 public:
 void data(int a, string b, int c)
 {
 roll_no = a;
 name = b;
 marks = c;
 }
 void show()
 {
 cout << "student details are:" << endl;
 cout << roll_no << endl << name << endl << marks << endl;
 }
};
int main()
{
 int rno, marks;
 string name;
 student s; 
 cout << "enter student details" << endl;
 cout << "enter roll no, name & marks" << endl;
 cin >> rno >> name >> marks;
 s.data(rno, name, marks);
 s.show();
 return 0;
}

