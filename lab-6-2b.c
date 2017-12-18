
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
int ppid,pid;
ppid=getppid();
pid=fork();
if(pid==0){
printf("Parent says -my id %d, my child id %u my parent id %u \n",getpid(),pid,getppid());
printf("Child says - my id %u and my parent id %u my grandparent id %u\n",getpid(),getppid(),ppid);
}
else
printf("Parent says -my id %d, my child id %u my parent id %u \n",getpid(),pid,getppid());
return 0;
}
