#include<iostream>

using namespace std;
int  main(int argc, char const *argv[]) {
  int a[10],i,k,med;
  for(i=0;i<=9;i++)
  {
    a[i]=i+1;
  }

  for(i=0;i<=9;i++)
  {
    for(k=i+1;k<=9;k++)
    {
      if(a[i]<a[k])
      {
        med=a[i];
        a[i]=a[k];
        a[k]=med;
      }
    }
    cout<<a[i]<<endl;;
  }
  cin>>a[0];
  return 0;
}
