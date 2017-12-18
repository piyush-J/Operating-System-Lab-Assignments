#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
int a;
a=fork();
switch(a)
{
case 0:
printf("My is %u myparent id %u\n",getpid(),getppid());
break;
default:
printf("My is %u myparent id %u\n",getpid(),getppid());
break;
}

}
