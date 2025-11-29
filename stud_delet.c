# include "header.h"
void stud_delet(struct st** ptr)
{
	struct st* temp;
	while(*ptr!=0)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}
	printf("all the record deleted sucessfully\n");
}
