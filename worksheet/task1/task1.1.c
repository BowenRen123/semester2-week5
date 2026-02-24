// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>
#include <stdbool.h>

bool is_prime(int x)
{
	if (x <= 1) return false;

	for (int i = 2;i < x;i++)
	{
		if (x % i == 0) 
		{
			return false;
		}
	}

	return true;
}

int main(void) {

	for (int i = 0;i < 100;i++)
	{
		if (is_prime(i))
		{
			printf("%d \n",i);
		}
	}
    
	return 0;
}