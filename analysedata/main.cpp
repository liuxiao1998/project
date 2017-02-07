/*
This programme is designed for analysing data.

				   Author : liuxiao/Eric/1998
*/


#include<iostream>
#include<fstream>
#include<string.h>
#include<stack>
#include<stdlib.h>

#define numlimit 100000
using namespace std;
string cmd;
stack <int>numlist_r;
stack <string>namelist_r;
class tools
{
public:
  int i,j,k,med,sum,sum_norepeat;
  string filename,logname;

  int numlist[numlimit];
  string namelist[numlimit];

  string namelist_re;
  void savelog(ofstream &log)
  {
    for(i=0;i<=sum_norepeat-1;++i)
    {
    log<<namelist[i]<<"   "<<numlist[i]<<endl;
}
  }
  void clac()
  {

    cout<<"Type in the file's name."<<endl;
    cin>>filename;
    ifstream file(filename.data());
    if  (file.is_open())
    {
      for(i=0;i<=numlimit;++i)
      {
        if(getline(file,namelist[i])==NULL)
        {
          j=i;
          break;
        }
        else
        {
          /* output the content of the file*/
          //cout<<namelist[i]<<endl;
        }
      }
      file.close();

      for(i=0;i<j;++i)
      {
        namelist_re=namelist[i];
        numlist[i]=0;
        for(k=0;k<j;++k)
        {
          if(strcmp(namelist_re.data(),namelist[k].data())==0)
          {
            numlist[i]+=1;
          }
        }
      }
      for(k=1;k<=j-1;++k)
      {

      for(i=0;i<=k-1;++i)
      {
        if(strcmp(namelist[k].data(),namelist[i].data())==0)
        {
          namelist[k]="0";
          numlist[k]=0;
        }
      }
    }




  /* Sort the numlist and namelist by bubble-sort.  */

    for(k=0;k<=j-2;++k)
    {
    for(i=k+1;i<=j-1;++i)
    {
      if(numlist[k]<numlist[i])
      {
        med=numlist[k];
        namelist_re=namelist[k];
        numlist[k]=numlist[i];
        namelist[k]=namelist[i];
        numlist[i]=med;
        namelist[i]=namelist_re;
      }
    }
  }
  for(i=j-1;i>=0;i--)
  {
    if(numlist[i]!=0&&strcmp(namelist[i].data()," ")!=0&&strcmp(namelist[i].data(),"")!=0)
    {
      namelist_r.push(namelist[i]);
      numlist_r.push(numlist[i]);
    }
  }
  sum_norepeat=namelist_r.size();
  for(i=0;i<=sum_norepeat-1;++i)
  {
    namelist[i]=namelist_r.top();
    namelist_r.pop();
    numlist[i]=numlist_r.top();
    numlist_r.pop();
  }
}
    else
    {
      cout<<"The file does not exist!"<<endl;
      clac();
    }

  }
  void ls()
  {
    sum=0;
    for(i=0;i<=sum_norepeat-1;++i)
    {

        sum+=numlist[i];
      cout<<namelist[i]<<" "<<numlist[i]<<endl;

    }
    cout<<"total :"<<sum<<endl;
  }
  void error()
  {
    cout<<"The command is not known!"<<endl<<"Please type in 'help' to learn about it."<<endl;
  }
  void help()
  {
    cout<<"The programme can only support the following commands."<<endl;
    cout<<"ana :classify and count"<<endl;
    cout<<"ls      :list results"<<endl;
    cout<<"save    :save results to local file"<<endl;
    cout<<"help    :get assistance"<<endl;
    cout<<"quit    :exit"<<endl;
	cout<<"cls     :clear the screen"<<endl;
  }
  void checkcmd(string cmd)
  {
    cin>>cmd;
    if(strcmp("ana",cmd.data())==0)
    {
      clac();
    }
    else if(strcmp("quit",cmd.data())==0)
    {
      exit(1);
    }
    else if(strcmp(cmd.data(),"save")==0)
    {
      cout<<"Please type in the name of the log file."<<endl;
      cin>>logname;
      ofstream log(logname.data());
if(log.is_open())
{
      savelog(log);
      log.close();
      cout<<"Log is saved."<<endl;
}
      else
{cout<<"Fail to save log!\n Please run this software in administrator mode."<<endl;
}

    }
    else if(strcmp(cmd.data(),"ls")==0)
    {
      ls();
    }
	else if(strcmp(cmd.data(),"cls")==0)
	{
		system("cls");
	}
    else if(strcmp(cmd.data(),"help")==0)
    {
      help();
    }
    else
    {
      error();
    }
  }
}a;
int main()
{
  cout<<"Welcome! I will help you analyse data."<<endl;

  while(1)
  {
    a.checkcmd(cmd);
  }
  return 0;
}
