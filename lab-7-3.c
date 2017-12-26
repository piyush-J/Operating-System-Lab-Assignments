#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
int pid;
pid=fork();
if(pid==0)
{execl("lab-6-1a","lab-6-1a",NULL);}
return 0;
}
