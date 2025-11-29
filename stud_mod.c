# include<stdio.h>
# include "fig.c"
void stud_mod(struct st* ptr)
{
	char ch,c,na[20];
	float fh;
	int n;
	struct st* temp=ptr;
	ch=fig_3();
	if((ch=='r')(ch=='R'))
	{
		printf("Enter the roll number to moddify\n");
		scanf(" %d",&n);
		while(temp!=NULL)
		{
			if(temp->roll==n)
			{
				printf("Yes the entered roll number is available\n");
				printf("now what to change name or percentage\n");
				scanf(" %c",&c);
				if((ch=='n')||(ch=='N'))
				{
					printf("enter the name\n");
					smecanf("%s",na);
					strcpy(temp->name,na);
					printf("name based modification made succesfully\n")

				}
				else
				{
					printf("enter the percentage to change\n");
					scanf("%f",&fh);
					temp->mark=fh;
					printf("perecentage based modification made succesfully\n")

				}

			}
			else
				temp=temp->next;

		}
		if(temp==NULL)
		{
			printf("Roll number Does not exist\n");
			return;
		}


	}
	else if((ch=='n')||(ch=='N'))
	{
		int count=0;
		printf("Enter the name for modification\n");
		scanf("%s",na);
		while(temp!=NULL)
		
			if((strcmp(temp->name,na))==0)
				++count;
			else
				temp=temp->next;
	}
	if(temp==NULL)
	{
		printf("the entered percenetage was not available\n");
		return;
	}
	else
	{
		if(count>1)
	{
		while(temp!=NULL)
		{
			if((strcmp(temp->name,na))==0)
			{
				printf("Yes the entered name is available\n");
				printf("now what to change name or percentage\n");
				scanf(" %c",&c);
				if((ch=='n')||(ch=='N'))
				{
					printf("enter the name\n");
					smecanf("%s",na);
					strcpy(temp->name,na);
					printf("name based modification made succesfully\n")

				}
				else
				{
					printf("enter the percentage to change\n");
					scanf("%f",&fh);
					temp->mark=fh;
					printf("perecentage based modification made succesfully\n")

				}
			}
			else
				temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("the name does not exist");
			return;
		}
	}
	else if((ch=='p')||(ch=='P'))
	{
		int count=0;
		printf("enter the percentage for moddification\n");
		scanf("%f",&fh);
		while(temp!=NULL)
		{
			if(temp->roll==fh)
				++count;
			else
				temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("the entered percenetage was not available\n");
			return;
		}
		else
		{
			if(count>1)
			{
				temp=ptr;
				printf("There are %dpersons in the same percentage\n",count);
				while(temp!=NULL)
				{
					if(temp->roll==fh)
					{
						printf("%d ",temp->roll);
						printf("%s ",temp->name);
						printf("%f ",temp->mark);
					}
					else
						temp=temp->next;
				}
				printf("now enter the roll numbber to make modification\n");
				scanf("%d",&n);
				temp=ptr;
				while(1)
				{
					if(temp->roll==n)
						break;
					else
						temp=temp->next;
				}
				printf("the roll number was available\n");
				printf("now what to change name or percentage\n");
				scanf(" %c",&c);
				if((ch=='n')||(ch=='N'))
				{
					printf("enter the name\n");
					smecanf("%s",na);
					strcpy(temp->name,na);
					printf("name based modification made succesfully\n")
				}
				else
				{
					printf("enter the percentage to change\n");
					scanf("%f",&fh);
					temp->mark=fh;
				}
			}
			else
			{
				temp=ptr;
				while(temp!=NULL)
				{
					if(temp->mark==fh)
					{	
						printf("Yes the entered percentage is available\n");
						printf("now what to change name or percentage\n");
						scanf(" %c",&c);
						if((ch=='n')||(ch=='N'))
						{
							printf("enter the name\n");
							smecanf("%s",na);
							strcpy(temp->name,na);
							printf("name based modification made succesfully\n")
						}
						else
						{
							printf("enter the percentage to change\n");
							scanf("%f",&fh);
							temp->mark=fh;
							printf("perecentage based modification made succesfully\n")
						}
					}
					else
						temp=temp->next;
				}
				if(temp==NULL)
				{
					printf("the name does not exist");
					return;
				}
			}
		}
	}

}
