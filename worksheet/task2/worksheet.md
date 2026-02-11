# Worksheet task

## Hexadecimal to Decimal Converter

Write a C program that convert a Hexadecimal string into its decimal integer equivalent. 
You are not allowed to use built-in conversion functions such as _strtol()_ or the _%x_ format specifier in _scanf_. 
You must implement the conversion logic manually using loops and conditional statements.
The program reads a string of up to 8 characters representing a Hexadecimal number (e.g., 1A3 or 1a3) from the user and prints out the decimal equivalent (e.g., 419).

The task is to demonstrate your skills in string traversal (iteration) and character-to-integer mapping (logic). 

### Flow Control:

- Iteration: Use a for or while loop to process the string characters.
- Logic: Use a switch statement or if-else ladder to handle the conversion of letters to values.
- Validation: If the input contains a character that is not a valid hex digit, the program must print Error: Invalid Hexadecimal and terminate. 
________________________________________

### Input & Output Format 
Input: A single string (maximum length of 8 characters). 

Output: 

- A single integer representing the decimal value, followed by a newline.
- In case of invalid input: Error: Invalid Hexadecimal\n 

