#include <iostream>
#include<string.h>
#include<fstream>
#include <stdlib.h>
using namespace std;
int sum;
class pa{
    public:
        int spend;
        int del;
        char cmd[10];
        void show()
        {
        cout<<"Ŀǰ�����ѣ�"<<sum<<endl;
        }
        void add()
        {
        cout<<"�������ѽ��:";
        cin>>spend;
        sum=sum+(int)spend;
        cout<<"���¼�¼�ɹ�,Ŀǰ�����ѣ�"<<sum<<endl;

        }
        void rm()
        {
        cout<<"�����������";
        cin>>del;
        sum=sum-(int)del;
        cout<<"���¼�¼�ɹ�,Ŀǰ�����ѣ�"<<sum<<endl;
        }
        void error()
        {
        cout<<"û�������������helpȡ�ð���"<<endl;
        }
        void help()
        {
        cout<<"add  :������ѽ���¼"<<endl;
        cout<<"rm   :ȥ�����ѽ���¼"<<endl;
        cout<<"ls   :��ʾ�����ܽ��"<<endl;
        cout<<"save :�������ݵ�Ӳ��"<<endl;
        cout<<"exit :�˳�"<<endl;
        cout<<"rmall:���ȫ������"<<endl;
        }
        void save(int a)
        {
           ofstream fp("log.txt");
           fp<<a;
           fp.close();
           cout<<"����ɹ�!"<<endl;
        }
        void getsave()
        {
            string s;
            ifstream ff("log.txt");
            ff>>s;
            sum=atoi(s.data());
            ff.close();
        }
        void rmall()
        {
            ofstream fp("log.txt");
            fp<<NULL;
            getsave();
        }
        }all;
int main(int argc,char*argv[])
{

    all.getsave();
    while(1)
    {

        cin>>all.cmd;

        if(strcmp(all.cmd,"add")==0)
        {
        all.add();

        }
        else if(strcmp(all.cmd,"rm")==0)
            {
                all.rm();
            }
        else if(strcmp(all.cmd,"ls")==0)
        {
           all.show();
        }
        else if(strcmp(all.cmd,"help")==0)
        {

            all.help();
        }
        else if(strcmp(all.cmd,"save")==0)
        {
            all.save(sum);
        }
        else if(strcmp(all.cmd,"exit")==0)
        {
            all.save(sum);
            exit(1);
        }
        else if(strcmp(all.cmd,"rmall")==0)
        {
            all.rmall();
        }
        else
        {
            all.error();
        }
    }
    return 0;
}
