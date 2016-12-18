#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{

	char *name;
	char gcc1[]="sudo gcc -o";
	char *cname;
    char *gcc;
	char space[]=" ";
    char cflags[]="-I/usr/include/python3.5m -I/usr/include/python3.5m  -Wno-unused-result -Wsign-compare -g -fstack-protector-strong -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -O3 -Wall -Wstrict-prototypes";
	char ldflags[]="-L/usr/lib/python3.5/config-3.5m-x86_64-linux-gnu -L/usr/lib -lpython3.5m -lpthread -ldl  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions";

	gcc=malloc(500);
	cname=malloc(20);
	name=malloc(20);

	printf("编译后的名称:\n");
	scanf("%s",name);
	printf("源文件名:");
	scanf("%s",cname);
    
	strcat(gcc,gcc1);
	printf("%s\n",gcc);
    strcat(gcc,space);
	printf("%s\n",gcc);
	strcat(gcc,name);
    strcat(gcc,space);
	strcat(gcc,cname);
	strcat(gcc,space);
	strcat(gcc,cflags);
	strcat(gcc,space);
	strcat(gcc,ldflags);

	printf("%s\n",gcc);
	system(gcc);

	system("ls");

	free(gcc);
	free(name);
	free(cname);

	gcc=NULL;
	name=NULL;
	cname=NULL;
}
