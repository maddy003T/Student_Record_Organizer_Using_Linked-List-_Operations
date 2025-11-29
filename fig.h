# include<stdio.h>
char fig_1(void)
{
	char ch;
	printf(".-------------------------------------.\n");
	printf("|     ****STUDENT RECORD MENU****     |\n");
	printf("|-------------------------------------|\n");
	printf("|                                     |\n");
	printf("|a/A :add new record                  |\n");
	printf("|d/D :delet a record                  |\n");
	printf("|s/S :show the list                   |\n");
	printf("|m/M :modify a record                 |\n");
	printf("|v/V :save                            |\n");
	printf("|e/E :exit                            |\n");
	printf("|t/T :sort the list                   |\n");
	printf("|l/L :delet all the records           |\n");
	printf("|r/R :reverse the list                |\n");
	printf("|                                     |\n");
	printf("|                                     |\n");
	printf("|Enter Your Choice:                   |\n");
	printf(".-------------------------------------.\n");
	scanf(" %c",&ch);    
	return ch;	
}
char fig_2(void)
{
	char ch;
	printf(".---------------------------.\n");
	printf("|r/R :enter roll to delet   |\n");
	printf("|n/N :enter name to delet   |\n");
	printf("|                           |\n");
	printf(".---------------------------.\n");
	scanf(" %c",&ch);    
	return ch;	

}
char fig_3(void)
{
	char ch;
	printf(".------------------------------------------------.\n");
	printf("|Enter which record to search for modification   |\n");
	printf("|r/R :to search a rollno                         |\n");
	printf("|n/N :to search a name                           |\n");
	printf("|p/P :percentage based                           |\n");	
	printf("|                                                |\n");	
	printf(".------------------------------------------------.\n");
	scanf(" %c",&ch);    
	return ch;	
}
char fig_4(void)
{
	char ch;
	printf(".---------------------------.\n");
	printf("|Enter                      |\n");
	printf("|s/s :save and exit         |\n");
	printf("|e/E :exite without saving  |\n");
	printf("|                           |\n");
	printf(".---------------------------.\n");
	scanf(" %c",&ch);    
	return ch;
}	
char fig_5(void)
{
	char ch;
	printf(".---------------------------.\n");
	printf("|Enter                      |\n");
	printf("|n/N :sort with name        |\n");
	printf("|p/P :sort with percentage  |\n");
	printf("|                           |\n");
	printf(".---------------------------.\n");
	scanf(" %c",&ch);    
	return ch;
}	
