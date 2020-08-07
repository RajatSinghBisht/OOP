#include<iostream>
using namespace std;
int main()
{
  int num,m=0,count=0;
  cout << "enter a number" << '\n';
  cin>>num;
  m=num/2;
  for(int i=2;i<=m;i++)
  {
    if(num%i==0){
      count++;
      break;
    }

  }
  if(count==0)
  {
    cout<<"palindrome number"<<endl;
  }
  else
    cout<<"not palindrome number";
}
