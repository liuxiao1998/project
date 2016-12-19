#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	using namespace std;
	int i=1;
	char* header;
	char sp[]=" ";

	header=(char*)malloc(100);
	if(argc==1)
	{
		exit(1);
	}
	strcat(header,argv[1]);
	i++;
	while(i<=argc-1)
		{
			strcat(header,sp);
			strcat(header,argv[i]);
		    i++;	
		}	
//	FILE* logr;
	FILE* logw;
//	logr=popen(argv[1],"r");
	logw=popen(header,"w");
    
//	pclose(logr);
	pclose(logw);
	logw=NULL;
	free(header);
//	logr=NULL;
	header=NULL;
	return 0;

}
