/**��������apt-get��װ��� ר��ж�س���
���ߣ���Х**/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(int argc,char *argv[])
{
	string cmd="sudo apt-get purge";
	int i=1;
	if(argv[1]==NULL)
	{
		printf("warning:ȱ��ж�������\n");
		exit(1);

	}


	while(i<=argc-1)
	{
		cmd.append(" ");
		cmd.append(argv[i]);
		i++;
	}


	system((char *)cmd.data());
	system((char*)"sudo apt-get autoremove");
	system((char*)"sudo apt-get clean");
	system((char*)"dpkg -l |grep ^rc|awk '{print $2}' |sudo xargs dpkg -P");


	return 0;
}
