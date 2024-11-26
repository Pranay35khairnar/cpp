#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 ofstream fout;
 fout.open("New.txt");
 if(!fout)
 {
 cerr<<"Error Opening file!"<<endl;
 return 1;
 }
 string line;
 int i=0;
 cout<<"Enter % lines of text: "<<endl;
 while(i<5)
 {
 getline(cin, line);
 fout<<line<<endl;
 i += 1;
 }
 fout.close();
 cout<<"Text Successfully written to NewFile.txt"<<endl;
 string srg;
 ifstream filestream("abc.txt");
 if(filestream.is_open())
 {
 while (getline (filestream,srg))
 {
 cout<< srg <<endl;
 }
 filestream.close();
 }
 else
 {
 cout<<"File opening is fail"<<endl;
 }
 return 0;
}

