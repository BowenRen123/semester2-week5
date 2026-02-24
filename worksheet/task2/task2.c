/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Bowen Ren
 * ID: 202029040
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	fgets(hex,9,stdin);
	hex[strlen(hex) - 1] = '\0';
 
	bool valid = true;
	for (int i = 0;i < 9;i++)
	{
		char hex_dig = hex[i]; 
		if (hex_dig == ' ') {
			printf("peeepeeee \n");
			continue;
		}

		if (!((hex_dig >= '0' && hex_dig <= '9') || (hex_dig >= 'A' && hex_dig <= 'F')))
		{
			valid = false;
		}
	}

	if (!valid) 
	{
		printf("Error: Invalid Hexadecimal\n");
		return 1;
	}

	// if input contains invalid hex digit
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}