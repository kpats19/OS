#include<stdio.h>
int main()
{

	int n,j,temp,tempOne,tempTwo,proc[10],beep[10],top[10],wait[10],pop[10],i;

	float att=0,awt=0;

	for(i=0;i<10;i++)
        {
		beep[i]=0;wait[i]=0;
        }

	printf("enter the number of process");
	scanf("%d",&n);
	printf("enter the burst times");

	for(i=0;i<n;i++)
        {
		scanf("%d",&beep[i]);
                pop[i]=i;
         }
	for(i=0;i<n;i++)
        {
                  for(j=i;j<n;j++)
                  {
                           if(beep[i]>beep[j])
                           {
                                  temp=beep[i];
                                  tempOne=pop[i];
                                  beep[i]=beep[j];
                                  pop[i]=pop[j];
                                  beep[j]=temp;
                                  pop[j]=tempOne;
                            }
		   }
	}
	wait[0]=0;
	for(i=0;i<n;i++)
	wait[i+1]=wait[i]+beep[i];
	for(i=0;i<n;i++)
        {
	    top[i]=wait[i]+beep[i];
            awt=awt+wait[i];
            att=att+top[i];
        }
	awt=awt/n;
	att=att/n;
	printf("\n\t process \t  waiting time \t  turn around time \n");
	for(i=0;i<n;i++)
	printf("\t pop[%d] \t %d \t\t %d \n",pop[i],wait[i],top[i]);
	printf("the average waitingtimeis %f\n",awt);
	printf("the average turn around time is %f\n",att);
	return 1;
}
