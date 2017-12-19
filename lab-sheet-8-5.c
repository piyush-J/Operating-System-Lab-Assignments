#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int turn=0; 
int s1,s2;
int main(int argc, char *argv[])
{
 
srand ( time(NULL) );//randomize random function generator

/* sequential code create two threads*/

#pragma omp parallel num_threads(2)
{

//first process P0
#pragma parallel section
{int i,n=5;
 if(omp_get_thread_num()==0){  //run only for P0
 for(i=0;i<n;i++)
 {s1=1;
  while(s2==1)
	{
		if (turn!=0)
		{
			s1=0;
			while(turn!=0);
			s1=1;
		}
	}
  
//CR

  printf("\nprocess  %d  other %d in CR count%d \n",s1,s2,i);
  printf("\nprocess  %d  other %d in CR count%d \n",omp_get_thread_num(),turn,i);
  
  turn=1;
  s1=0; 
}}
}

//second process P1
#pragma parallel section
{int i,n=5;
 if(omp_get_thread_num()==1){   //run only for P1
 for(i=0;i<n;i++){
  s2=1;
  while(s1==1)
	{
		if (turn!=1)
		{
			s2=0;
			while(turn!=1);
			s2=1;
		}
	}
  
//CR

  printf("\nprocess  %d  other %d in CR count%d \n",s1,s2,i);
  printf("\nprocess  %d  other %d in CR count%d \n",omp_get_thread_num(),turn,i);
  
  turn=0;
  s2=0;  }}
}

}//end pragma
/* sequential code */
return 0;
}