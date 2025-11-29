/*# include "header.h"
void add_end(struct st** ptr)
{
	int y=1;
        struct st* temp=(struct st*)malloc(sizeof(struct st));
	printf("ENTER NAME MARK=");
	scanf("%s %f",temp->name,&temp->mark);
	struct st* temp1=*ptr;
        while(temp1!=0)
        {
                if(temp1->roll==y)
		{
			++y;
			temp1=*ptr;
		}
		else
			temp1=temp1->next;
        }
	temp->roll=y;
	if(*ptr==NULL)
	{
		*ptr=temp;
		temp->next=0;
	}
	else
	{
		struct st*last=*ptr;
		while(last->next!=0)
		{
			last=last->next;
		}
		temp->next=last->next;
		last->next=temp;
	}
}
#include "header.h"

void add_end(struct st** ptr)
{
    int y = 1;
    struct st* temp = (struct st*)malloc(sizeof(struct st));
    printf("ENTER NAME MARK=\n");
    scanf(" %[^\n] %f", temp->name, &temp->mark);
    temp->next = NULL;

    // 1. Find the smallest missing roll number
    struct st* temp1 = *ptr;
    while (temp1 != NULL)
    {
        if (temp1->roll == y)
        {
            ++y;
            temp1 = *ptr;   // restart search
        }
        else
        {
            temp1 = temp1->next;
        }
    }
    temp->roll = y;

    // 2. Insert node in sorted order by roll
    if (*ptr == NULL || (*ptr)->roll > temp->roll)
    {
        temp->next = *ptr;
        *ptr = temp;
    }
    else
    {
        struct st* curr = *ptr;
        while (curr->next != NULL && curr->next->roll < temp->roll)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}*/
/*# include "header.h"
void add_end(struct st **ptr)
{
    int y = 1;
    struct st* temp = (struct st*)malloc(sizeof(struct st));
    printf("ENTER NAME MARK=\n");
    scanf(" %[^\n] %f", temp->name, &temp->mark);
    temp->next = NULL;

    // 1. Find the smallest free roll number
    struct st* temp1 = *ptr;
    while (temp1 != NULL) {
        if (temp1->roll == y) {
            ++y;
            temp1 = *ptr;   // restart search
        } else {
            temp1 = temp1->next;
        }
    }
    temp->roll = y;

    // 2. Insert node according to roll order
    if (*ptr == NULL || (*ptr)->roll > temp->roll) {
        temp->next = *ptr;
        *ptr = temp;
    } else {
        struct st* curr = *ptr;
        while (curr->next != NULL && curr->next->roll < temp->roll)
            curr = curr->next;
        temp->next = curr->next;
        curr->next = temp;
    }
}*/
# include "header.h"
void add_end(struct st **ptr)
{
	char confirm;
	do
	{
		int y = 1;
    		struct st* temp = (struct st*)malloc(sizeof(struct st));
   		 printf("ENTER NAME MARK=\n");
    		scanf(" %[^\n] %f", temp->name, &temp->mark);
   		 temp->next = NULL;

    // 1. Find the smallest free roll number
   	 	struct st* temp1 = *ptr;
   		 while (temp1 != NULL)
		 {
        		if (temp1->roll == y)
			{
            			++y;
           	 		temp1 = *ptr;   // restart search
        		}
			else
			{
           			 temp1 = temp1->next;
       		 	}
    		}
    		temp->roll = y;

    // 2. Insert node according to roll order
    if (*ptr == NULL || (*ptr)->roll > temp->roll) {
        temp->next = *ptr;
        *ptr = temp;
    } else {
        struct st* curr = *ptr;
        while (curr->next != NULL && curr->next->roll < temp->roll)
            curr = curr->next;
        temp->next = curr->next;
        curr->next = temp;
    	}
		printf("do u want to add the name if yes press y else prerss n\n");
		scanf(" %c",&confirm);
	}while(confirm=='Y'||confirm=='y');
}

