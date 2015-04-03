//Name:Patel Keyur S.
/*Write a C program to implement Shortest Job first (Non Preemptive)Scheduling Algorithm.
*(Consider all processes are arrived at time 0).
*Inputs: Number of processes, Burst Time of each process.
*Outputs: Turnaround time and waiting time of each process.
*/
#include<stdio.h>


void main()
{
  int procNo,k,tmpTime,l;
 int i,m;  
k=0;
  printf("\nEnter the no of processes:");
  scanf("%d",&procNo);
  int burstTime[procNo],WaitTim[procNo],TurnTim[procNo],proc[procNo],burstTime2[procNo];
  for(i=0;i<procNo;i++)
  	{
  		printf("\nEnter burst time for process %d:",i+1);
  		scanf("%d",&burstTime[i]);
  		burstTime2[i]=burstTime[i];
  		proc[i]=i+1;
  	}
  for(l=0;l<procNo;l++)
  {
 	 for(i=l+1;i<procNo;i++)
 	 {
  		if(burstTime[l]>burstTime[i])
  		{
  			tmpTime=burstTime[i];
  			burstTime[i]=burstTime[l];
  			burstTime[l]=tmpTime;
  		}
  	}
  }
 for(i=0;i<procNo;i++)
 {
 	for(l=0;l<procNo;l++)
 	{
 		if(burstTime2[i]==burstTime[l])
 		proc[l]=i+1;
 	}
 }
 
    	
 for(i=0;i<procNo;i++)
  	{
  		WaitTim[i]=k;
  		TurnTim[i]=WaitTim[i]+burstTime[i];
  		k=k+burstTime[i];
  	}
  printf("\nProcessNo burstTime WaitTime TurnAroundTime\n"); 
  for(i=0;i<procNo;i++)
  printf("%d	   %d	    %d        %d\n",proc[i],burstTime[i],WaitTim[i],TurnTim[i]);
  
}
