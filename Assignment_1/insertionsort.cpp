#include<iostream>

using namespace std;
int main()
{
  int a[100],n,temp,i,j;
  cout<<"enter limit of array"<<endl;
  cin>>n;
  cout<<"enter elements of arrays=";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<n;i++)
  {
    temp=a[i];
    j=i-1;
    while (j>=0&&a[j]>temp)
     {
      a[j+1]=a[j];
      j--;
     }
    a[j+1]=temp;

   }
  for(i=0;i<n;i++)
  {
    cout << a[i] << ' ';
  }
}
