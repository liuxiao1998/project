#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<string.h>
#include<fstream>

using namespace std;
time_t *now;
int main(int argc, char **argv)
{
  char ck[1];
  cin>>ck;
  while(strcmp("y",ck)==0)
  {
  ofstream log;
  log.open("log");
  int res,resb,i,j=0,k;
  int sum=0;
  cout<<"type in loop times";
  cin>>k;
  ++k;
  while(j<=(k-1))
  {
    i=0;
  srand(time(NULL));
  res=rand()%10;
  resb=res;
  while(resb==res)
  {

    ++i;
    srand(time(NULL));
    res=rand()%10;
  }

  ++j;
  if(j>1)
  {
  sum+=i;
}

if(j>1)
  {
if(j<=10)
  {
cout<<"0"<<j-1<<" "<<i<<endl;
  }
else
{

  cout<<j-1<<" "<<" "<<i<<endl;
}
  }
}

  cout<<" cpu分数: "<<sum/(k-1)/10000<<endl;
  log.close();
  cin.clear();
  cin.sync();
  cin>>ck;
  }
  return 0;
}
