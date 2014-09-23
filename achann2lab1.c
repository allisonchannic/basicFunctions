/* Allison Channic
 * CS 211 Fall 2014
 * Lab time: Wednsday 1:00
 * Project 1
 */

//Include necessary C libraries
#include <stdio.h>
#include <time.h>


/* Function to find the maximum number out of two
 * Takes two integers as its parameters
 * Returns the larger of the two as an integer
 */ 
int max (int num1, int num2)
{
	//Check if the first integer parameter is greater than the second
	//If so, it is the max. Return it.
	if (num1 > num2)
		return num1;
	//Else the second integer is greater or equal to the first
	//Return it	
	else
		return num2;	
}


/* Funtion to swap the values of two integers
 * Takes two pointers to two integers as its parameters
 * Swaps the two values by using a temporary variable
 */
void swap(int *num1, int *num2)
{
	//Set up temporary variable to store the first value
	int temp = *num1;
	//Swap values
	*num1 = *num2;
	*num2 = temp;
}


/* Function to add up the values of an array
 * Takes an array as its parameter
 * Uses a for loop to add the value of each element of the array to an
 * accumulator variable called sum
 * Return the sum as an integer
 */
int sum(int array[])
{
	//Set up for loop counter and sum accumulator
	int i;
	int sum = 0;
	//For loop to get each value from the array and add them together
	for (i = 0; i < 10; i++)
		sum += array[i];
		
	//Return the sum of the values of the array
	return sum;
}


/* Function to adjust each element of the array
 * Takes a pointer to an array as its parameter
 * Takes each element and adds some value between 1 - 10
 * Value is randomly generated using the rand() function in C
 */
void adjust(int *array)
{
	//Ensure randomly generated number is different each time program is run
	srand((int) time(0));
	//Variable for the random number
	int randomNum;
	//Loop to generate a new random number and add it to each element of the array
	int i;
	for (i = 0; i < 10; i++)
	{	
		randomNum = rand() % 10 + 1;
		array[i] += randomNum;
	}
}

/* Main method
 */
int main()
{
	//Print name and UIN
	printf("\n\nMy name is Allison Channic.\n");
	printf("My UIN is 658573113.\n\n");

	//Variables for two numbers
	int num1;
	int num2;

	//Get the values of two numbers from user input
	printf("Please enter two integer numbers below.\n");
	printf("Number one: ");
	scanf("%d", &num1);
	printf("Number two: ");
	scanf("%d", &num2);

	//Display the values back to the user
	printf("\nThe numbers you entered were %d and %d.", num1, num2);

	//Find the larger of the two numbers and display it to the user
	int maxNum = max(num1, num2);
	printf("\nThe larger of the two numbers is %d.", maxNum);

	//Swap the values of the two numbers and display them to the user
	swap(&num1, &num2);
	printf("\nAfter the numbers have been swapped, number one is %d and number two is %d.", num1, num2);

	//Initialize an array with 10 elements
	int array[10];

	//Scan in the values for the elements of the array from user input
	printf("\nPlease enter 10 integers: ");
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}

	//Sum up the values of the array and display the value to the user
	int arraySum = sum(array);		
	printf("The sum of these values is: %d", arraySum);

	//Display the values of the array to the user
	printf("\nThe values of the array are: ");
	for(i = 0; i < 10; i++)
		printf("%d ", array[i]);
	
	//Adjust the values of the array so that each is incremented by a random number
	//Then display the new values to the user		
	adjust(array);
	printf("\nThe values of the array after incrementing by random numbers are: ");
	for(i = 0; i < 10; i++)
		printf("%d ", array[i]);
}