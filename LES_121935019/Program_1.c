//Program to find GCD of two numbers using recursion  


#include <stdio.h> 
   
int gcd(int a, int b)                      // GCD function
{ 
    if (a == 0)                            // when either one of the numbers is zero: GCD=0
       return b; 
    if (b == 0) 
       return a; 
  
    if (a == b)                           // when numbers are equal
        return a; 
   
    if (a > b)                             // if a is greater
        return gcd(a-b, b); 

    return gcd(a, b-a);                    // if b is greater
} 


int main() 
{ 
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a); 
    printf("Enter second number: ");
    scanf("%d", &b); 
    if(isdigit(a))
	{
	  printf("you entered a number..");
	}
	else
	{
	  printf("enter only an integer number..");
	}
	

    printf("\nGCD of %d and %d is %d ", a, b, gcd(a, b)); 
    return 0; 
} 



