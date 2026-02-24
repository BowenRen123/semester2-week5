// Worksheet 2.5

/* 
 * Task 3 - extension task
 * Implement a C program that demonstrates an input validation loop with the following requirements:
 * 1. Prompt the person to enter a password that must:
 *    a. Be at least 8 characters long
 *    b. Contain at least one uppercase letter
 *    c. Contain at least one number
 *    d. Contain at least one special character (!@#$%^&*)
 * 2.	Use an appropriate loop structure to continue prompting until a valid password is entered
 * 3.	After a successful password entry, ask if they want to validate another password (y/n)
 * 4.	Use an appropriate outer loop to continue the program until the person chooses to exit
 * This task requires combining nested loops with string processing and character checking.
 */

#include <stdio.h>
#include <string.h>
 
int has_upper_case(char* text,int text_len)
{
	for (int i = 0;i < text_len;i++)
	{
		if (text[i] >= 'A' && text[i] <= 'Z')
		{
			return 0;
		}
	}

	return 1;
}

int has_one_number(char* text,int text_len)
{
	for (int i = 0;i < text_len;i++)
	{
		if (text[i] >= '0' && text[i] <= '9')
		{
			return 0;
		}
	}

	return 1;
}

int has_special_character(char* text,int text_len)
{
	for (int i = 0;i < text_len;i++)
	{
		if (text[i] == '!' || text[i] == '@' || text[i] == '#'
		|| text[i] == '$' || text[i] == '%' || text[i] == '^' || text[i] == '&'
	|| text[i] == '*')
		{
			return 0;
		}
	}

	return 1;
}
 
int main(void){
	char password[128];
	char prompt;

	while (1) {
	
		while (1) {
		
			printf("Enter a password: ");
			scanf("%s",password);

			int len = strlen(password);

			if (len >= 8 
			&& has_one_number(password,len) == 0
			&& has_special_character(password,len) == 0 
			&& has_upper_case(password,len) == 0) 
			{
				break;
			}

		}

		printf("Do you want to validate another password? (y/n)");
		scanf(" %c",&prompt);

		if (prompt == 'n') {
			break;
		} 

	}
	
	return 0;
 }