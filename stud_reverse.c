# include "header.h"
int count(struct st* ptr)
{
	int i=0;
	while(ptr!=0)
	{
		++i;
		ptr=ptr->next;
	}
	return i;

}
/*void stud_reverse(struct st** ptr)
{
	int i,j,c=count(*ptr);
	struct st* temp=*ptr;
	struct st **p=(struct st**)malloc(c*(sizeof(struct st*)));
	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	p[0]->next=0;
	for(i=1;i<c;i++)
		p[i]->next=p[i-1];
	*ptr=p[c-1];
	printf("Reverse the list made succesfully\n");
}*/
void stud_reverse(struct st** ptr)
{
    printf("----------------------------------------\n");
    printf("| %-5s | %-15s | %-10s |\n", "ROLL", "NAME", "MARK");
    printf("|--------------------------------------|\n");
	struct st* temp=*ptr;
	int i,j,c=count(*ptr);
	struct st **p=(struct st**)malloc(c*(sizeof(struct st*)));
	for(i=0;i<c;i++)
	{
		p[i]=temp;
		temp=temp->next;
	}
	for(i=c-1;i>=0;i--)
	{
		temp=p[i];
        printf("| %-5d | %-15s | %-10.2f |\n", temp->roll, temp->name, temp->mark);
	}
    printf("----------------------------------------\n");
}
