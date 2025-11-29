# include "header.h"
void stud_exit(struct st* ptr)
{
	char ch;
	ch=fig_4();
	if((ch=='s')||(ch=='S'))
	{
		stud_save(ptr);
		printf("Saved succesffuly\n");
	}
	else if((ch=='e')||(ch=='E'))
	{
		printf("Exited without saving\n");
		return ;
	}
}
