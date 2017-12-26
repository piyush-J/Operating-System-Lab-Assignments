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
{execlp("ls","ls","-l","-a",NULL);}
else
{execlp("date","date",NULL);}
return 0;
}
