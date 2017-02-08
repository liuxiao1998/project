#include "iostream"
#include "vector"
#include<algorithm>
using namespace std;

bool cmp(int a, int b)
{
  return a<b;
}
int main()
{
  int i,med,k;
  vector<int>ab;


  for(i=0;i<=9;i++)
  {
    cin>>med;
    ab.push_back(med);
  }
/**********************/
med=0;

sort(ab.begin(),ab.end(),cmp);
/**********************/
cout<<endl;
for(k=0;k<=9;k++)
{
  cout<<ab[k];
}
return 0;
}
