#include<iostream>
#include<stdio.h>
using namespace std;
int i;
int main()
{
  for(i=0;i<=100000;++i)
    {
    if(i%2==1&&i%3==0&&i%4==1&&i%5==4&&i%6==3&&i%7==0&&i%8==1&&i%9==0)
    {
      cout<<i<<endl;
    }
  }
  getchar();
}
