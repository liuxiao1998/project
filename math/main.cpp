/*I want to write codes!
       
        liuxiao1998/Eric
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

string cmd;
string cppname;
string cname;
int main(void)
{
 while(1)
{
cout<<"File type: ";
cin>>cmd;
if(strcmp(cmd.data(),"cpp")==0)
{
ofstream cpp;
cout<<"cpp-name:";
cin>>cppname;
cppname.append(".cpp");
cpp.open(cppname.data());
cpp<<"/*"<<endl<<"         liuxiao1998/Eric"<<endl<<"*/"<<endl;
cpp<<"#include<iostream>"<<endl<<"using namespace std;"<<endl<<endl<<"int main(int argc,char **argv)"<<endl<<"{"<<endl<<endl<<"}"<<endl;
cpp.close();
}
else if(strcmp(cmd.data(),"c")==0)
{
cout<<"c-name:";
cin>>cname;
cname.append(".c");
ofstream c;
c.open(cname.data());
c<<"/*"<<endl<<"         liuxiao1998/Eric"<<endl<<"*/"<<endl;
c<<"#include<stdio.h>"<<endl<<endl<<"int main(int argc,char *argv[])"<<endl<<"{"<<endl<<endl<<"}"<<endl;
c.close();
}
else
{
break;
}
return 0;
}
}
