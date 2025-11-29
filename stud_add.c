# include<stdio.h>
struct st
{
	int roll;
	char name[20];
	float percentage;
};
void add_end(struct st** ptr)
{
	struct st* temp=(struct st*)malloc(sizeof(struct st));
	printf("Enter your name:\n");
	scanf("%s",temp->name);
	printf("Enter the percentage:\n");
	scanf("%.2f",&temp->percentage);
	if(*ptr==0)
	{
		temp->=*ptr;
		*ptr=temp;
		temp->roll=1
	}
	else
	{
		int count=1;
		struct st* cp=*ptr;
		while(cp->roll==count++)
		{
			cp=cp->next;
		}
		temp->roll=--count;

		struct st* last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}
