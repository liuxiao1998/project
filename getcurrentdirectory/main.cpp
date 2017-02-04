/*This programme is designed for getting the current directory under windows environment.
  Get all the files' names and search for the patterns.
  Edited by liuxiao/eric
  2017/2/3

*/


#include<sys/types.h>
#include<dirent.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char *namelist[10000];
	DIR *dir;
	struct dirent *ptr;

	dir=opendir("..");

	while((ptr=readdir(dir))!=NULL)
	{

		#ifdef _WIN32
		namelist[i]=ptr->d_name;
		printf("name: %s\n",namelist[i]);
		#endif

		#ifdef __Linux
		list[i]=ptr->d_name;
		printf("type: %d name: %s\n",ptr->d_type,namelist[i]);
		#endif
    ++i;
	}

	closedir(dir);



}
