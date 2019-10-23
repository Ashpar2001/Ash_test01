#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main ()
{
  	char username[50];
	char password[16];

	printf("Enter the Username :- ");
	scanf(" %s", &username);

	printf("Now for creating a password, you must follow the following criteria :- \n"
		   "\t1.It must contain an Upper-case alphabet. \n"
		   "\t2.It must contain a Lower-case alphabet. \n"
		   "\t3.It must contain a numberin it. \n"
		   "\t4.The length must be between 8 to 15 characters ony.\n"
		   "\t5.It must contain a symbol or a character among the following only :- \n"
		   "\t\t1.@\t2.$\t3.&\n");
	printf("Create a password :- ");
	scanf(" %s", &password);

	int i, num_Ualpha,num_Lalpha, num_Num, num_char, num_Total;
	num_Ualpha=num_Lalpha=num_Num=num_char=num_Total = 0;
	for(i=0;i<=15;i++)
	{
		if(isalpha(password[i]))
		{
			if(isupper(password[i]))
			{
				num_Ualpha += 1;
			}

			else if(islower(password[i]))
			{
				num_Lalpha += 1;
			}
		}

		if(isdigit(password[i]))
		{
			num_Num += 1 ;
		}

		if(password[i] == '@' || password[i] == '$' || password[i] == '&')
		{
			num_char += 1;
		}
	}
	num_Total = num_Ualpha + num_char + num_Num + num_Lalpha ;

	if(num_Total>=8 && num_Total<=15)
	{
		if(num_Ualpha!=0 && num_Lalpha!=0 && num_Num!=0 && num_char!=0)
		{
			printf("Your Username and Password have been successfully created. Congratulations !!\n");
		}
	}
	else
	{
		printf("You did not fulfill one of the criteria for creating the new password. Please try later sometime. Thank you.\n");
	}
}