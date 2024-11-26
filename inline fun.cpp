#include<iostream> 
using namespace std; 
void arith(int a,int b); 
void rel(int a,int b); //globally declare 
void log(int a,int b); 
int main() 
{ 
int a,b; 
int res; 
cout<<"enter a two numbers"<<endl; 
cin>>a>>b; 
//cout<<"sub answer="<<a+b<<endl; 
//cout<<"sub answer="<<a-b<<endl;
//cout<<"mul answer="<<a*b<<endl; 
//cout<<"div answer="<<a/b<<endl; 
//cout<<"mod answer="<<a%b<<endl;
arith(a,b); 
rel(a,b); 
log(a,b); 
//res=(a==b); 
//cout<<"output is="<<res<<endl; 
//res=(a!=b); 
//cout<<"output is="<<res<<endl; 
//res=(a>=b); 
//cout<<"output is="<<res<<endl; 
//res=(a<=b); 
//cout<<"output is="<<res<<endl; 
//res=(a>b && b>a); 
//cout<<"output is="<<res<<endl; 
//res=(a>b || b>a); 
//cout<<"output is="<<res<<endl; 
//cout<<++a; 
//cout<<a++; 
//cout<<a; 
//cout<<--a; 
//cout<<a; 
//cout<<a--; 
//cout<<a<<endl; 
//res=(a>b & b>a); 
//cout<<"output is="<<res<<endl; 
//res=(a>b | b>a); 
//cout<<"output is="<<res<<endl;*/ 
return 0; 
} 
inline void arith(int a,int b) 
{ 
cout<<"sub answer="<<a+b<<endl; 
cout<<"sub answer="<<a-b<<endl; 
cout<<"mul answer="<<a*b<<endl; 
cout<<"div answer="<<a/b<<endl; 
cout<<"mod answer="<<a%b<<endl; 
} 
inline void rel(int a,int b) 
{ 
bool res; 
res=(a==b); 
cout<<"output is="<<res<<endl; 
res=(a!=b); 
cout<<"output is="<<res<<endl; 
res=(a>=b); 
cout<<"output is="<<res<<endl;
res=(a<=b); 
cout<<"output is="<<res<<endl; 
res=(a==b); 
cout<<"output is="<<res<<endl; 
res=(a!=b); 
cout<<"output is="<<res<<endl; 
res=(a>=b); 
cout<<"output is="<<res<<endl; 
res=(a<=b); 
cout<<"output is="<<res<<endl; 
} 
inline void log(int a,int b) 
{ int res; 
res=(a>b && b>a); 
cout<<"output is="<<res<<endl; 
res=(a>b || b>a); 
cout<<"output is="<<res<<endl; 
res=(a>b & b>a); 
cout<<"output ..........is="<<res<<endl; 
res=(a>b | b>a); 
cout<<"output************ is="<<res<<endl; 
}

