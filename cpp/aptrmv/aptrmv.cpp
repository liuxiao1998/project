#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int i=1;
	extern void popenc(char*cm);
	if(argv[1]==NULL)
	{
		printf("错误:请加上要卸载的软件名\n");
		exit(1);
	 
	}
	char cmd[]="sudo apt-get purge";
	char sp[]=" ";
	char *check;
    check=(char *)malloc(100);
	
	while(i<=argc-1)
	{
		strcat(cmd,sp);
		strcat(cmd,argv[i]);
		i++;
	}
	printf("即将执行命令:%s\n",cmd);
recheck:printf("要继续吗？（y or n）\n");
	scanf("%s",check);
	if(strcmp(check,"n")==0)
	{
		exit(1);
	}
	if(strcmp(check,"y")!=0)
	{
		goto recheck;
	}

	popenc((char*)cmd);
	popenc((char*)"sudo apt-get autoremove");
	popenc((char*)"sudo apt-get clean");
	popenc((char*)"dpkg -l |grep ^rc|awk '{print $2}' |sudo xargs dpkg -P");




	free(check);
	check=NULL;
	return 0;
}
