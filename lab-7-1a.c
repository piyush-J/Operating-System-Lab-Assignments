#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
int pid,status,childid;
pid_t waitch;
pid=fork();
if(pid==0)
{printf("child pid %u its parent pid %u\n",getpid(),getppid());
execl("/bin/ls","ls",0);}
else
{do{waitch=wait(&status);}while(waitch!=childid);
}
return 0;
}
