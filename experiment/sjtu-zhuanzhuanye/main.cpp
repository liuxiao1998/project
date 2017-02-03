#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>

using namespace std;
int a[10],i,s,sum;
string loga[10];
char cmd[5];
class ca{
public:
void ls(void)
{
    sum=0;
  for(i=0;i<=9;i++)
  {
      sum+=a[i];
  }
  cout<<"0 测控仪器 "<<a[0]<<"/8"<<endl;
  cout<<"1 电气自动化 "<<a[1]<<"/14"<<endl;
  cout<<"2 自动化 "<<a[2]<<"/9"<<endl;
  cout<<"3 信息安全 "<<a[3]<<"/9"<<endl;
  cout<<"4 计算机科学与技术 "<<a[4]<<"/12"<<endl;
  cout<<"5 软件工程 "<<a[5]<<"/13"<<endl;
  cout<<"6 电子信息科学类 "<<a[6]<<"/14"<<endl;
  cout<<"7 电子科学与技术 "<<a[7]<<"/7"<<endl;
  cout<<"8 信息工程 "<<a[8]<<"/17"<<endl;
  cout<<"9 微电子科学 "<<a[9]<<"/8"<<endl;
  cout<<"总计： "<<sum<<"人"<<endl;
}

void zl(char *cmd)
{
    cin>>cmd;
    while(cin.fail())
    {
     cin.clear();
     cin.sync();
     cin>>cmd;
    }


   }

   void save(ofstream &logo)
   {
     for (i=0;i<=9;i++)
     {
       logo<<a[i]<<endl;
     }

   }
   void ini(string *a,int *b,ifstream &logi)
   {
       for(i=0;i<=9;i++)

           if(logi>>a[i])
           {
               b[i]=atoi(a[i].data());
           }
           else
           {
               cout<<"缺少参数"<<i<<endl;
           }

   }
   void start()
   {
       sum=0;
  cout<<"0 测控仪器"<<endl;
  cout<<"1 电气自动化"<<endl;
  cout<<"2 自动化"<<endl;
  cout<<"3 信息安全"<<endl;
  cout<<"4 计算机科学与技术"<<endl;
  cout<<"5 软件工程"<<endl;
  cout<<"6 电子信息科学类"<<endl;
  cout<<"7 电子科学与技术"<<endl;
  cout<<"8 信息工程"<<endl;
  cout<<"9 微电子科学"<<endl;
  for(i=0;i<=9;i++)
  {
    a[i]=0;
  }
  do {
    cin>>s;
    if(cin.fail())
    {
      cout<<"只能输入有效整数！"<<endl;
      cin.clear();
      cin.sync();
    }
    else if(s<=9&&s>=0)
    {
      a[s]+=1;
    }
  } while(s!=333);


  for(i=0;i<=9;i++)
  {
  sum+=a[i];
  }
   }
 }pa;

int main()
{

  ifstream logi("log",ios::binary);
  pa.ini(loga,a,logi);


while(1)
{


    pa.zl(cmd);

    if(strcmp(cmd,"start")==0)
    {
        pa.start();
    }
    if(strcmp(cmd,"ls")==0)
    {
      pa.ls();
    }
    else if(strcmp(cmd,"save")==0)
   {
     ofstream logo("log",ios::binary);
     pa.save(logo);
     logo.close();
     cout<<"保存成功！"<<endl;
   }
   else if(strcmp(cmd,"quit")==0)
   {

       exit(1);
   }
   else if(strcmp(cmd,"cls")==0)
   {
       system("cls");
       pa.ls();
   }
   else
   {
     cout<<"cmd:  cls（清屏） save（保存到文件） start（开始计数） ls（显示） quit（退出）"<<endl;
   }
 }


 logi.close();
  return 0;

}
