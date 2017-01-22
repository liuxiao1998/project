#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<fstream>

using namespace std;
int main(int argc, char **argv) 
{
  string s,l;
  ofstream log;
  log.open("log");
  char s1[2],l1[30];
  int res,resb,i=0,j=0,tme;
  time_t start,stop;
  while(j<=49)
  {
  srand(time(0));
  res=rand()%10;
  resb=res;
  start=time(NULL);
  while(resb==res)
  {
    ++i;
    srand(time(NULL));
    res=rand()%10;
    //cout<<res<<resb<<endl;
  }
  stop=time(NULL);
  tme=stop-start;
  s="time: ";
  sprintf(s1,"%d",tme);
  s.append(s1);
  l="s loop: ";
  sprintf(l1,"%d",i);
  l.append(l1);
  s+=l;
  ++j;
  cout<<j<<": "<<s<<endl;
  
  log<<j<<" "<<s.data()<<endl;
  
  }
  log.close();
  return 0;
}
