#include<iostream>
#include<fstream>

using namespace std;

int main()
{
  ifstream log("log",ios::binary);
  string ss;

  while(log>>ss)
  {
    cout<<ss<<endl;
  }

  cin>>ss;
  return 0;


}
