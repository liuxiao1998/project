#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int num;
	int aa()
	{
    char a;
	scanf("%c",&a);
	if(strcmp(&a,"y")==0)
	  return 1;
	else if(strcmp(&a,"n")==0)
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



