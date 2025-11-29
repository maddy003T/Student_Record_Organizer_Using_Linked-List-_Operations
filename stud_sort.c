# include "header.h"
void stud_sort(struct st* ptr) 
{
    char ch;
    int c = count(ptr);
    struct st*hhptr=0;
   // printf("the count was: %d \n",c);
    ch = fig_5();
    for(int h=0;h<c;h++)
    {
	    struct st* sam = (struct st*)malloc(sizeof(struct st));
	    sam->roll=ptr->roll;
	    strcpy(sam->name,ptr->name);
	    sam->mark=ptr->mark;
	    ptr=ptr->next;
	    if(hhptr==0)
	    {
		    sam->next=0;
		    hhptr=sam;
	    }
	    else
	    {
		    struct st*previous=hhptr;
		    while(previous->next!=0)
		    {
			previous=previous->next;
		    }
		    sam->next=previous->next;
		    previous->next=sam;
	    }

    }
    for (int i = 0; i < c; i++) 
    {
        struct st* temp = hhptr;
        struct st* nextnode = temp->next;
	for (int j = 0; j < c - 1 - i; j++) 
	{
            //if (nextnode == NULL) 
		    //break;
	    int swap = 0;
            if ((ch == 'N' || ch == 'n')) 
	    {
                if (strcmp(temp->name, nextnode->name) > 0) {
                    swap = 1;
                }
            } 
	    else if ((ch == 'p' || ch == 'P'))
	    {
                if (temp->mark > nextnode->mark) 
		{
                    swap = 1;
                }
            }

            if (swap) 
	    {
                int troll = temp->roll;
                char tname[40];
                float tmark = temp->mark;
		strcpy(tname, temp->name);

                temp->roll = nextnode->roll;
                strcpy(temp->name, nextnode->name);
                temp->mark = nextnode->mark;

                nextnode->roll = troll;
                strcpy(nextnode->name, tname);
                nextnode->mark = tmark;
            }

            temp = temp->next;
            nextnode = nextnode->next;
        }
    }

    printf("List sorted successfully and the list was\n");
    stud_show(hhptr);

}
