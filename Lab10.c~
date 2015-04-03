//Name:Patel Keyur S. 
/*Write a C program to implement First Come First Serve Scheduling Algorithm. (Consider all
*processes are arrived at time 0).
*Inputs: Number of processes, Burst Time of each process.
*Outputs: Turnaround time and waiting time of each process.
*/
#include<stdio.h>


void main()
{
  int procNo,i,k;
  k=0;
  printf("\nEnter the no of processes:");
  scanf("%d",&procNo);
  int burstTime[procNo],waitTime[procNo],turnTime[procNo];
  for(i=0;i<procNo;i++)
  	{
  		printf("\nEnter burst time for process %d:",i+1);
  		scanf("%d",&burstTime[i]);
  	}
  for(i=0;i<procNo;i++)
  	{
  		waitTime[i]=k;
  		turnTime[i]=waitTime[i]+burstTime[i];
  		k=k+burstTime[i];
  	}
  printf("Process  WaitTime TurnAroundTime"); 
  for(i=0;i<procNo;i++)
  printf("%d	  %d	  %d\n",i+1,waitTime[i],turnTime[i]);
  
}
