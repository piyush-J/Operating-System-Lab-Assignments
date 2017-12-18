#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
int i;
for(i=0;i<10;i++)
{
if(!fork())
{
printf("child id %u parent id %u \n",getpid(),getppid());
exit(0);
}
}
return 0;
}
