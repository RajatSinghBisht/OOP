#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"enter 3 numbers"<<endl;
   cin>>a>>b>>c;
  if(a>b&&a>c)
    cout<<a <<"is greatest of three number";
   else if(b>c)
    cout<<b <<"is greatest of three number";
   else
    cout<<c  <<"is greatest of three number";
  return 0;
}
