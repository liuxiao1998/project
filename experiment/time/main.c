#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
  double d=0.1;
  double start,end;
  while (1) {
  start=clock();
  getchar();
  end=clock();
  d=(end-start)/1000;
  printf("%.3f\n",d);
  fflush(stdin);
}
printf("You are so fast!");
system("pause");

}
