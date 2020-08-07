#include<iostream>
using namespace std;
int main()
{
  int a;
  int rev=0,temp,digit;
  cout<<"enter number=";
  cin>>a;
  temp=a;
  while(a!=0)
  {
    digit=a%10;
    rev=(rev*10)+digit;
    a=a/10;
  }
  if(temp==rev)
  cout<<" palindrome number";
  else
  cout<<"not palindrome number";
}
