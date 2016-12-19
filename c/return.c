#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int num;
	int aa()
	{
    char b;
	scanf("%c",&b);
	if(strcmp(&b,"y")==0)
	  return 1;
	else if(strcmp(&b,"n")==0)
	  return 0;
	else 
	  return -1;
	
	}
	
	void pd(int a)
	{
	if(a==1)
	{printf("true\n");
	}
	else if(a==0)
	{
	printf("false\n");
	}
    else
	{
	printf("error\n");
	}
	
	}

	
	int main(int argc,char *argv[])
	{
		int pdz;
		pdz=aa();
		pd(pdz);
		return 0;

	}



