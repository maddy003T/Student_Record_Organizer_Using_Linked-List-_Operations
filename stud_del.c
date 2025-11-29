# include"header.h"
void stud_del(struct st** ptr)
{
	char ch;
	int n,m;
	ch=fig_2();
	if((ch=='r')||(ch=='R'))
	{
		printf("enetr the roll no to delet:\n");
		scanf(" %d",&n);
		struct st* temp=*ptr;
		struct st* prev=NULL;
		while(temp!=NULL)
		{
			if(temp->roll==n)
			{
				if(temp==*ptr)
				{
					*ptr=temp->next;
				}
				else
				{
					prev->next=temp->next;

				}
				free(temp);
				printf("Roll Number Based Deleted Succefully\n");
				return;
			}
			else
			{
				prev=temp;
				temp=temp->next;
			}
		}
		if(temp==NULL)
		printf("No roll number matches\n");
	}
	else if((ch=='n')||(ch=='N'))
	{
		char sam[30];
		int i=0;
		printf("Enter the name for search:\n");
		scanf(" %s",sam);
		struct st* search=*ptr;
		while(search!=0)
		{
			if(strcmp(search->name,sam)==0)
			{
				++i;
				search=search->next;
			}
			else
				search=search->next;
		}
		if(i>1)
		{
			search=*ptr;
			while(search!=0)
			{
				if(strcmp(search->name,sam)==0)
				{
					printf("%d ",search->roll);
					printf("%s ",search->name);
					printf("%f ",search->mark);
					printf("\n");
					search=search->next;
				}
				else
				{
					search=search->next;
				}

			}
			printf("In the same name %d persons are there\n",i);
			printf("Now enter roll number to delet:");
			scanf("%d",&m);
			struct st* temp=*ptr;
			struct st* prev=NULL;
			while(temp!=0)
			{
				if(temp->roll==m)
				{
					if(temp==*ptr)
					{
						*ptr=temp->next;
					}
					else
					{
						prev->next=temp->next;

					}
					free(temp);
					printf("Deleted Succesfully By  Roll number(same-name-case)\n");
					return;
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}
		}
		else
		{
			int temp_roll;
			struct st* temp=*ptr;
			struct st *prev=NULL;
			while(temp!=NULL)
			{
				if(strcmp(temp->name,sam)==0)
				{
					printf("%d|%s|%f\n",temp->roll,temp->name,temp->mark);
					printf("Enter the roll number to delet\n");
					scanf("%d",&temp_roll);
					if(temp_roll==temp->roll)
					{
						if(temp==*ptr)
						{
							*ptr=temp->next;
						}
						else
						{
							prev->next=temp->next;

						}
						free(temp);
						printf("Roll Number Based Name Deleted Succesfully\n"); 
						return;
					}
					else
					{
						printf("Entered Roll Number Was Wrong\n");
						return;

					}
				}
				else
				{
					prev=temp;
					temp=temp->next;
				}
			}
			printf("Name Does Not Matches\n");
		}
	}
	else
		printf("Invalid character\n");
}

