# include<stdio.h>
# include<stdlib.h>
# include<string.h>
struct st
{
	int roll;
	char name[20];
	float mark;
	struct st* next;
};
void add_end(struct st**);
void stud_show(struct st*);
void stud_del(struct st**);
char fig_1(void);
char fig_2(void);
char fig_3(void);
char fig_4(void);
char fig_5(void);
//void name(char* na,struct st* temp)
//void mark(float fh,struct st* temp)
void stud_mod(struct st* ptr);
void stud_save(struct st* ptr);
void stud_reverse(struct st** ptr);
void stud_exit(struct st* ptr);
void stud_sort(struct st*);
void stud_delet(struct st** ptr);
