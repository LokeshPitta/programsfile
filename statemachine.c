#include<stdio.h>

typedef enum
{
	downstate,
	startingstate,
	runningstate,
	exitingstate,
}state;

int opt=1;
void starting();
void running();
void exiting();
state nextstate=downstate;

int main()
{
	printf("\n\t process starts \t\n");
	do
	{
		switch(nextstate)
		{
			case downstate:
				{
					int select;
					printf("\npresent state is downstate\n"
					       "\nEnter 1 for Starting state\n");
					scanf("%d",&select);
					if(select == 1)
					{
						starting();
					}
					else
					{
						printf("state not changed\n");
						opt = 0;
					}
				}
				break;
		}
	}while(opt == 0);
}
				
void running()
{
	int select;
	printf("\npresent state is running state \n");
	printf("\nEnter 1 for exiting state\n");
	scanf("%d",&select);
	if (select == 1)
	{
	        printf("\nprocess present in exiting state\n");
		exiting();
	}
	else
	{
		printf("\nState not changed\n");
		running();
	}
}

void exiting()
{
	printf("\npresent state is exiting state\n");
	printf("\nenter 1 or 0 for down state\n");
	int select;
	scanf("%d",&select);
	opt = 0;
}

void starting()
{
	int select;
	printf("\npresent state is starting state  \n");
	printf("\nEnter 0 for exiting state and 1 for running state\n");
	scanf("%d",&select);
	if(select == 1)
	{
		running();
	}
	else if(select = 0)
	{
		exiting();
	}
	else
	{
		printf("\nEnter the correct input either 0 or 1\n");
	}
}
