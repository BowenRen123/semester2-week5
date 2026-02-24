// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {
 
	printf("--- Average Calculator ---\n");

	int num = 0;
	int sum = 0;
	int count = 0;

	do {
		printf("Enter a number: (-1 to exit otherwise continue! )");
		scanf("%d",&num);

		if (num == -1) {break;}

		sum += num;
		count++;

	} while (num != -1);

	if (count == 0)
	{
		printf("no numbers entered! \n");
		return 1;
	}
    
	float avg = (float) sum / (float) count;
	printf("the average is: %.2f \n",avg);

	return 0;
}