#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	if(argv[1]==NULL)
	{
		printf("错误:请加上要卸载的软件名\n");
		exit(1);
	 
	}
	char cmd[100]="sudo apt-get purge ";
	char *check;
    check=malloc(100);
	strcat(cmd,argv[1]);
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

	system(cmd);
	system("sudo apt-get autoremove");
	system("sudo apt-get clean");
	system("dpkg -l |grep ^rc|awk '{print $2}' |sudo xargs dpkg -P");




	free(check);
	check=NULL;
	return 0;
}

