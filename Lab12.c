 #include<stdio.h>
int main()
{

	int n,j,temp,tempOne,tempTwo,proc[10],beep[10],top[10],Wait[10],pop[10],i;

	float att=0,awt=0;

	for(i=0;i<10;i++)
        {
		beep[i]=0;Wait[i]=0;
        }

	printf("enter the number of process");
	scanf("%d",&n);
	printf("enter the deadlines");

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
	Wait[0]=0;
	for(i=0;i<n;i++)
	Wait[i+1]=Wait[i]+beep[i];
	for(i=0;i<n;i++)
        {
	    top[i]=Wait[i]+beep[i];
            awt=awt+Wait[i];
            att=att+top[i];
        }
	awt=awt/n;
	att=att/n;
	printf("\n\t process \t waiting time \t turn around time \n");
	for(i=0;i<n;i++)
	printf("\t pop[%d] \t %d \t\t %d \n",pop[i],Wait[i],top[i]);
	printf("the average waitingtimeis %f\n",awt);
	printf("the average turn around time is %f\n",att);
}
