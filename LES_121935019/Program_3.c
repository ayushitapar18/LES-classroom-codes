// C program to print the given pattern (n = input no. of rows)
/*	* * * * *  * * * * *
	* * * *      * * * *
	* * *          * * *
	* *              * *	for n = 5
	*                  *
	*                  *
	* *              * *
	* * *          * * *
	* * * *      * * * *
	* * * * *  * * * * *    */

#include<stdio.h> 
pattern_print(int n) 
{ 
	int i,j; 

	// This is upper half of pattern 
	for (i=1; i<=n; i++) 
	{ 
		for (j=1; j<=(2*n); j++) 
		{ 
			// Left part of pattern 
			if (i>(n-j+1)) 
				printf(" "); 
			else
				printf("*"); 
				
			// Right part of pattern 
			if ((i+n)>j) 
				printf(" "); 
			else
				printf("*"); 
		} 
		printf("\n"); 
	} 
	
	// This is lower half of pattern 
	for (i=1; i<=n; i++) 
	{ 
		for (j=1; j<=(2*n); j++) 
		{ 
			// Right Part of pattern 
			if (i<j) 
				printf(" "); 
			else
				printf("*"); 
			
			// Left Part of pattern 
			if (i<=((2*n)-j)) 
				printf(" "); 
			else
				printf("*"); 
		} 
		printf("\n"); 
	} 
} 

// main function 
int main() 
{ 
	int num;
	printf("Enter number of rows required in the pattern: ");
	scanf("%d", &num);
	
	if(isdigit(num))
	{
	  printf("you entered a number..");
	}
	else
	{
	  printf("enter only an integer number..");
	}
	pattern_print(num); 
	return 0; 
} 

