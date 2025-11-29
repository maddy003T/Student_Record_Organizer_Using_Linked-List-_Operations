# include"fig.h"
# include "header.h"
int main()
{
	char ch;
	struct st* hptr=0;
	while(1)
	{
		ch=fig_1();
		if((ch=='a')||(ch=='A'))
			add_end(&hptr);
		else if((ch=='d')||(ch=='D'))
			stud_del(&hptr);
		else if((ch=='s')||(ch=='S'))
			stud_show(hptr);
		else if((ch=='m')||(ch=='M'))
			stud_mod(hptr);
		else if((ch=='v')||(ch=='V'))
			stud_save(hptr);
		else if((ch=='E')||(ch=='e'))
		{
			stud_exit(hptr);
			return 0;
		}
		else if((ch=='t')||(ch=='T'))
			stud_sort(hptr);
		else if((ch=='L')||(ch=='l'))
			stud_delet(&hptr);
		else if((ch=='r')||(ch=='R'))
			stud_reverse(&hptr);

	}
}
