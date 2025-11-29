# include"header.h"
void name(char* na,struct st* ptr)
{
	struct st* temp=ptr;
	int n,count=0;
	char c,a[20];
       float fh;	
	while(temp!=NULL)
	{
		if((strcmp(temp->name,na))==0)
		{
			++count;
			temp=temp->next;
		}
                else
                        temp=temp->next;
	}
	if(count==0)
        {
		printf("the entered name was not available\n");
                return;
        }
        else
       	{
		if(count>1)
                {
			temp=ptr;
			printf("in the same name there are %d persons available\n",count);
                	while(temp!=NULL)
                	{
                        	if((strcmp(temp->name,na))==0)
                        	{
					printf("%d ",temp->roll);
					printf("%s ",temp->name);
					printf("%f ",temp->mark);
					printf("\n");
					temp=temp->next;
				}
				else
					temp=temp->next;
			}
			printf("now enter the roll numbber to make modification\n");
                        scanf("%d",&n);
                        temp=ptr;
                        while((temp!=NULL)&&(temp->roll!=n))
				temp=temp->next;
			if(temp==NULL)
                	{
				printf("the entered roll number was not available\n");
                        	return;
                	}
			else
			{
                                printf("the roll number was available\n");
                                printf("now what to change (N)ame or (P)ercentage\n");
                                scanf(" %c",&c);
                                if((c=='n')||(c=='N'))
                                {
					printf("enter the name\n");
                                        scanf(" %[^\n]",na);
                                        strcpy(temp->name,na);
                                        printf("name based modification made succesfully\n");
                                }
                                else
                                {
					printf("enter the percentage to change\n");
                                        scanf("%f",&fh);
                                        temp->mark=fh;
                                        printf("percentage based modification made succesfully\n");
                                }
                        }
		}
		else
		{
			printf("Yes the entered name is available\n");
                        printf("now what to change (N)ame or (P)ercentage\n");
                        scanf(" %c",&c);
                        if((c=='n')||(c=='N'))
                        {
				temp=ptr;
				while((strcmp(temp->name,na))!=0)
					temp=temp->next;
				printf("enter the name\n");
                                scanf(" %[^\n]",a);
                                strcpy(temp->name,a);
                                printf("name based modification made succesfully\n");
			}
                        else
			{
				temp=ptr;
				while((strcmp(temp->name,na))!=0)
					temp=temp->next;
				printf("enter the percentage to change\n");
                                scanf("%f",&fh);
                               	temp->mark=fh;
                                printf("perecentage based modification made succesfully\n");
			}
		}
	}
}
void mark(float fh,struct st* ptr)
{
	struct st* temp=ptr;
	int n,count=0;
	char c,na[20]; 
	while(temp!=NULL)
        {
		if(temp->mark==fh)
		{
			++count;
			temp=temp->next;
		}
		else
			temp=temp->next;
	}
	if(count==0)
	{
		printf("the entered percenetage was not available\n");
		return;
	}
	else
	{
		if(count>1)
		{
			temp=ptr;
			printf("There are %dpersons in the same percentage\n",count);
			while(temp!=NULL)
			{
				if(temp->mark==fh)
				{
					printf("%d ",temp->roll);
					printf("%s ",temp->name);
                                        printf("%f ",temp->mark);
					temp=temp->next;
                                }
                                else
					temp=temp->next;
			}
			printf("now enter the roll numbber to make modification\n");
                        scanf("%d",&n);
                        temp=ptr;
                        while((temp!=NULL)&&(temp->roll!=n))
				temp=temp->next;
			if(temp==NULL)
			{
				printf("the eneterd roll number was not available\n");
				return;
			}
			else
			{
				printf("the roll number was available\n");
                                printf("now what to change (N)ame or (P)ercentage\n");
                                scanf(" %c",&c);
                                if((c=='n')||(c=='N'))
                                {                                    		
					printf("enter the name\n");
                                        scanf(" %[^\n]",na);
                                        strcpy(temp->name,na);
                                        printf("name based modification made succesfully\n");
                                }
                               	 else
				 {
					 printf("enter the percentage to change\n");
                                        scanf("%f",&fh);
                                        temp->mark=fh;
                                }
			}
		}
		else
		{
			temp=ptr;
			while(temp!=NULL)
			{
				if(temp->mark==fh)
				{
					printf("Yes the entered percentage is available\n");
                                        printf("now what to change (N)ame or (P)ercentage\n");
                                        scanf(" %c",&c);
                                        if((c=='n')||(c=='N'))
					{
						printf("enter the name\n");
                                                scanf(" %[^\n]",na);
                                                strcpy(temp->name,na);
                                                printf("name based modification made succesfully\n");
						break;
					}
					else
				       	{
						printf("enter the percentage to change\n");
						scanf("%f",&fh);
						temp->mark=fh;
						printf("perecentage based modification made succesfully\n");
						break;
					}
				}
			       	else
					temp=temp->next;
			}
			if(temp==NULL)
			{
				printf("the name does not exist");
				return;
                        }
		}
	}
}
void stud_mod(struct st* ptr)
{
        char ch,c,na[20];
        float fh;
        int n;
        struct st* temp=ptr;
        ch=fig_3();
        if((ch=='r')||(ch=='R'))
        {
                printf("Enter the roll number to moddify\n");
                scanf(" %d",&n);
                while(temp!=NULL)
                {
                        if(temp->roll==n)
                        {
                                printf("Yes the entered roll number is available\n");
                                printf("now what to change (N)ame or (P)ercentage\n");
                                scanf(" %c",&c);
                                if((c=='n')||(c=='N'))
                                {
                                        printf("enter the name\n");
                                        scanf(" %[^\n]",na);
					strcpy(temp->name,na);
                                        printf("roll number based name modification made succesfully\n");
					break;

                                }
                                else
                                {
                                        printf("enter the percentage to change\n");
                                        scanf("%f",&fh);
                                        temp->mark=fh;
                                        printf("roll number based perecentage modification made succesfully\n");
					break;

                                }

                        }
                        else
                                temp=temp->next;

                }
                if(temp==NULL)
                {
                        printf("Roll number Does not exist\n");
                        return;
                }


        }
        else if((ch=='n')||(ch=='N'))
        {
                int count=0;
                printf("Enter the name for modification\n");
                scanf(" %[^\n]",na);
		name(na,ptr);
	}
        else if((ch=='p')||(ch=='P'))	
        {
                int count=0;
                printf("enter the percentage for moddification\n");
                scanf("%f",&fh);
		mark(fh,ptr);
        }

}
