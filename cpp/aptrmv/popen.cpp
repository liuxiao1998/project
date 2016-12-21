#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void popenc(char *cm)
{
	using namespace std;
	

	
    FILE* logw;

	logw=popen(cm,"w");
    
	pclose(logw);
	logw=NULL;
}
