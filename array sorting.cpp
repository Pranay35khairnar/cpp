#include<iostream>
using namespace std;
int main()
{
 int n,j,temp;
 cout<<"enter array size"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter array elements"<<endl;
 for(int i=0;i<n;i++)
 {
 cin>>a[i];
 }
 cout<<"array elements is"<<endl;
 for(int i=0;i<n;i++)
 {
 	cout<<a[i]<<endl;
 }
 cout<<"array is sorted"<<endl;
 for(int i=0;i<(n-1);i++)
 {
 for(int j=0;j<(n-i-1);j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<"sorted array is"<<endl;
 cout<<"new array is"<<endl;
 for(int i=0;i<n;i++)
 {
 cout<<a[i]<<endl;
 }
}
