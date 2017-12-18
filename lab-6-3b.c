
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
}
else if(a){
wait(0);
printf("My id is %u my parent id  s %u\n",getpid(),getppid());
}
return 0;
}
