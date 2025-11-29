/*# include "header.h"
void stud_show(struct st* ptr)
{
	printf("----------------------------------------\n");
	while(ptr!=NULL)
	{
		printf("|%d ",ptr->roll);
		printf("%s ",ptr->name);
		printf("%f     |",ptr->mark);
		printf("\n");
		ptr=ptr->next;
	}
	printf("------------------------------------------\n");
}*/
#include "header.h"
void stud_show(struct st* ptr)
{
    printf("----------------------------------------\n");
    printf("| %-5s | %-15s | %-10s |\n", "ROLL", "NAME", "MARK");
    printf("|--------------------------------------|\n");

    while (ptr != NULL)
    {
        printf("| %-5d | %-15s | %-10.2f |\n", ptr->roll, ptr->name, ptr->mark);
        ptr = ptr->next;
    }

    printf("----------------------------------------\n");
}

