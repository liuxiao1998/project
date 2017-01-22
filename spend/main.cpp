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
        string cmd;
        void show()
        {
        cout<<"目前总消费："<<sum<<endl;
        }
        void add()
        {
        cout<<"本次消费金额:";
        cin>>spend;
        sum=sum+(int)spend;
        cout<<"更新记录成功,目前总消费："<<sum<<endl;

        }
        void rm()
        {
        cout<<"输入误操作金额：";
        cin>>del;
        sum=sum-(int)del;
        cout<<"更新记录成功,目前总消费："<<sum<<endl;
        }
        void error()
        {
        cout<<"没有这条命令，输入help取得帮助"<<endl;
        }
        void help()
        {
        cout<<"add  :添加消费金额记录"<<endl;
        cout<<"rm   :去除消费金额记录"<<endl;
        cout<<"ls   :显示消费总金额"<<endl;
        cout<<"save :保存数据到硬盘"<<endl;
        cout<<"exit :退出"<<endl;
        cout<<"rmall:清空全部数据"<<endl;
        }
        void save(int a)
        {
           ofstream fp("log.txt");
           fp<<a;
           fp.close();
           cout<<"保存成功!"<<endl;
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

        if(strcmp(all.cmd.data(),"add")==0)
        {
        all.add();

        }
        else if(strcmp(all.cmd.data(),"rm")==0)
            {
                all.rm();
            }
        else if(strcmp(all.cmd.data(),"ls")==0)
        {
           all.show();
        }
        else if(strcmp(all.cmd.data(),"help")==0)
        {

            all.help();
        }
        else if(strcmp(all.cmd.data(),"save")==0)
        {
            all.save(sum);
        }
        else if(strcmp(all.cmd.data(),"exit")==0)
        {
            all.save(sum);
            exit(1);
        }
        else if(strcmp(all.cmd.data(),"rmall")==0)
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
