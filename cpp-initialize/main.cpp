#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
int main()
{
  string ss;
  cout<<"cpp's name:"<<endl;
  cin>>ss;
  ofstream mm(ss.data());

  mm<<"#include<iostream>"<<endl<<"using namespace std;"<<endl<<"int main()"<<endl<<"{"<<endl<<endl<<"}";
  mm<<endl<<"/*"<<endl<<"һֱ����Ѱ��"<<endl<<"�ںδ��������Ӱ"<<endl<<"�������Ƕ���Ҫ��������ҹ��"<<endl<<"���޷�����ƭ�Լ�"<<endl<<"one more time"<<endl<<"*/";
  mm.close();
}
