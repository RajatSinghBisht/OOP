#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int i,j;
  char str[30];
  cout<<"enter string="<<endl;
  cin>>str;
    j=strlen(str)-1;
  for(i=0;i<j/2;i++)
  {
    if(str[i]!=str[j--])
    {
      cout<< "not palindrome" <<endl;
    }
    else
       cout<< "palindrome" <<endl;
  }
}
