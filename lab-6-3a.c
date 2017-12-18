
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
int a;
a=fork();
if(!a){
printf("My id is %u myparent id %u\n",getpid(),getppid());
exit(55);
}
else if(a){
sleep(60);
printf("My id is %u my parent id  s %u\n",getpid(),getppid());
}
printf("pid %d terminates.....\n",a);
return 0;
}
