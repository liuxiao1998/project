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
  cout<<"0 ������� "<<a[0]<<"/8"<<endl;
  cout<<"1 �����Զ��� "<<a[1]<<"/14"<<endl;
  cout<<"2 �Զ��� "<<a[2]<<"/9"<<endl;
  cout<<"3 ��Ϣ��ȫ "<<a[3]<<"/9"<<endl;
  cout<<"4 �������ѧ�뼼�� "<<a[4]<<"/12"<<endl;
  cout<<"5 ������� "<<a[5]<<"/13"<<endl;
  cout<<"6 ������Ϣ��ѧ�� "<<a[6]<<"/14"<<endl;
  cout<<"7 ���ӿ�ѧ�뼼�� "<<a[7]<<"/7"<<endl;
  cout<<"8 ��Ϣ���� "<<a[8]<<"/17"<<endl;
  cout<<"9 ΢���ӿ�ѧ "<<a[9]<<"/8"<<endl;
  cout<<"�ܼƣ� "<<sum<<"��"<<endl;
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
               cout<<"ȱ�ٲ���"<<i<<endl;
           }

   }
   void start()
   {
       sum=0;
  cout<<"0 �������"<<endl;
  cout<<"1 �����Զ���"<<endl;
  cout<<"2 �Զ���"<<endl;
  cout<<"3 ��Ϣ��ȫ"<<endl;
  cout<<"4 �������ѧ�뼼��"<<endl;
  cout<<"5 �������"<<endl;
  cout<<"6 ������Ϣ��ѧ��"<<endl;
  cout<<"7 ���ӿ�ѧ�뼼��"<<endl;
  cout<<"8 ��Ϣ����"<<endl;
  cout<<"9 ΢���ӿ�ѧ"<<endl;
  for(i=0;i<=9;i++)
  {
    a[i]=0;
  }
  do {
    cin>>s;
    if(cin.fail())
    {
      cout<<"ֻ��������Ч������"<<endl;
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
     cout<<"����ɹ���"<<endl;
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
     cout<<"cmd:  cls�������� save�����浽�ļ��� start����ʼ������ ls����ʾ�� quit���˳���"<<endl;
   }
 }


 logi.close();
  return 0;

}
