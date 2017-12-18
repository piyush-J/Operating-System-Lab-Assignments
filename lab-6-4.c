
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main(){
int a,status;
a=fork();
if(!a){
printf("My id is %u myparent id %u\n",getpid(),getppid());exit(61);
}
else if(a){
int p=wait(&status);
printf("%d\n",status);
printf("My id is %u my parent id  s %u\n",getpid(),getppid());
}
return 0;
}
