#include<iostream>
#include<fstream>
#include<sstream>
#include<sys/types.h>
#include<dirent.h>
#include<unistd.h>
#include<string.h>

using namespace std;
DIR *dir;
struct dirent *ptr;
int num[100000],inall;
int sum,i,k;
string filename[100000],linelist[100000];
stringstream med;

void getdirec( string * filename,int &sum)
{
  dir=opendir(".");
  i=0;
  while((ptr=readdir(dir))!=NULL)
  {
    med<<ptr->d_name;
    filename[i]=med.str();
    i++;
    med.str("");
  }
  sum=i;
}

void count(int *num,string *filename,int &sum)
{
  for(i=0;i<=sum-1;++i)
  {
    //cout<<"sss"<<endl;
    if(strcmp(filename[i].data(),"count.exe")!=0)
    {
  ifstream file(filename[i].data());
  if(file.is_open())
  {
  k=0;
    while(getline(file,linelist[k])!=NULL)
    {
      ++k;
    }
    num[i]=k;
    file.close();


}
  else
  {
  //  cout<<"Fail to open the file!"<<endl;
  }
  //cout<<num[i]<<endl;
}
}
}
void ls(int &sum)
{
  for(i=0;i<=sum-1;++i)
  {
    inall+=num[i];
  }
  cout<<"Codes in all:"<<inall<<endl;
}

int main()
{
  getdirec(filename,sum);
  cout<<sum;
  count(num,filename,sum);
  ls(sum);
  getchar();
  return 0;



}
