# include "header.h"
void stud_save(struct st* ptr)
{
	FILE*fp=fopen("student.dat","w");
	if (fp == NULL) 
	{
        	perror("File open failed");
        	return;
    	}
	while (ptr != NULL) 
	{
        	fprintf(fp, "%d %s %.2f\n", ptr->roll, ptr->name, ptr->mark);
        	ptr = ptr->next;
    	}

    	fclose(fp);
    	printf("Student records saved in student.dat\n");
}
