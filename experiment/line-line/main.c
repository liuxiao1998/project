#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
int line[9][9];
int i=1,j=1;
while (i<10)
{
 while(j<10)
  {
    line[i-1][j-1]=10*i+j;
    printf("%d ",line[i-1][j-1]);
    ++j;
  }
  ++i;
  j=1;
  printf("\n");
}
getchar();
}
