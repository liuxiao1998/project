#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{

	char gcc1[]="sudo gcc -o3 -o";
    char *gcc;
	char space[]=" ";
    char cflags[]="-I/usr/include/python3.5m -I/usr/include/python3.5m  -Wno-unused-result -Wsign-compare -g -fstack-protector-strong -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -O3 -Wall -Wstrict-prototypes";
	char ldflags[]="-L/usr/lib/python3.5/config-3.5m-x86_64-linux-gnu -L/usr/lib -lpython3.5m -lpthread -ldl  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions";

	if(argc<3)
	{
		printf("\033[1;37merror: \033[1;;31m缺少参数\033[0m");
		printf("1:自定义名称 2:源文件地址\n");
		exit(1);
	}
	else if(argc>3)
	{
		printf("\033[1;37merror: \033[1;;31m参数过多\033[0m");
		printf("，存在无效参数\n");
		exit(1);
	}

	gcc=malloc(500);

    
	strcat(gcc,gcc1);
	printf("%s\n",gcc);
    strcat(gcc,space);
	printf("%s\n",gcc);
	strcat(gcc,argv[1]);
    strcat(gcc,space);
	strcat(gcc,argv[2]);
	strcat(gcc,space);
	strcat(gcc,cflags);
	strcat(gcc,space);
	strcat(gcc,ldflags);

	printf("%s\n",gcc);
	system(gcc);

	free(gcc);

	gcc=NULL;
}
