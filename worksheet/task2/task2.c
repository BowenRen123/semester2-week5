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
#include <math.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%s",hex);
 
	bool valid = true;
	for (int i = 0;hex[i] != '\0';i++)
	{
		char hex_dig = hex[i];

		if (!((hex_dig >= '0' && hex_dig <= '9') || 
		(hex_dig >= 'A' && hex_dig <= 'F') || 
		(hex_dig >= 'a' && hex_dig <= 'f')))
		{
			valid = false;
		}
	}

	
	if (!valid) 
	{
		printf("Error: Invalid Hexadecimal\n");
		return 1;
	}

 
	int i = 0;
	int length = strlen(hex);
	int dig;

	while (i < strlen(hex))
	{

		char curr = hex[i];

		if (curr >= 'A' && curr <= 'F')
		{
			dig = 10 + (int) (curr - 'A');		
		}

		else if (curr >= 'a' && curr <= 'f')
		{
			dig = 10 + (int) (curr - 'a');		
		}

		else if (curr >= '0' && curr <= '9')
		{
			dig = 0 + (int) (curr - '0');		
		}

		decimal += dig * pow(16,length - i - 1);
		i++;	
	}

	// if input contains invalid hex digit
	
	// print the decimal result
	printf("decimal:%ld\n", decimal);
	
	return 0;
}