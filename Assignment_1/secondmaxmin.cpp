#include<iostream>
using namespace std;
int secondmax(int* a,int n)
{
  int i,temp=0;
  for(i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]<a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;          }
      }
  }
  return a[1];
}
int secondmin(int* a,int n)
{
  int i,temp=0;
  for(i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;          }
      }
  }
  return a[1];
}
int main()
{
  int a[100],n;
  int minsecond=0,maxsecond=0;
  cout << "enter limit of array" << '\n';
  cin >> n;
  cout<<"\n enter elements of array";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  minsecond=secondmin(a,n);
  maxsecond=secondmax(a,n);

  cout<<"2nd min="<<minsecond<<endl;
  cout<<"2nd max="<<maxsecond<<endl;
}
