#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
int main()
{
int pid,j,status,childpid;
pid=fork();
if(pid==0)
{for (j=1;j<5;j++)
     {switch(fork())
      {case 0:
      printf("child %d started with pid %ld, sleeping \n",j, (long)getpid());
      sleep(1+j*2);
      exit(EXIT_SUCCESS);
      default:break;
     }
}}
else
{for(;;)
	{childpid= wait(NULL);
	if (childpid==-1)
	{printf("no more child\n");
	exit(EXIT_SUCCESS);
	}
	printf("wait() returned child pid %ld \n", (long) childpid);
	}
}
return 0;
}
