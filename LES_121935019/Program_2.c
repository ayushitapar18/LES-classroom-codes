//Program to accept a number in decimal and print the number in Octal and Hexadecimal code. 


#include<stdio.h>

// Function for decimal to octal conversion
void oct_cov(int n) 
{
    int octnum[100]; 
  
  // counter for hexadecimal number array
    int i = 0, j=0; 
    while (n != 0)
	{ 
        octnum[i] = n % 8; 
        n = n / 8; 
        i++; 
    } 
  
    for (j = i - 1; j >= 0; j--) 
        printf("%d",octnum[j]);
} 

// Function for decimal to hexadecimal conversion
void hex_cov(int n) 
{    
    char hexnum[100]; 
      
    // counter for hexadecimal number array 
    int i = 0, j=0; 
    while(n!=0) 
    {    
        int temp  = 0; 
          
        temp = n % 16; 
          
        if(temp < 10) 
        { 
            hexnum[i] = temp + 48; 
            i++; 
        } 
        else
        { 
            hexnum[i] = temp + 55; 
            i++; 
        } 
          
        n = n/16; 
    } 
    // print hexadecimal number  
    for(j=i-1; j>=0; j--) 
        printf("%c",hexnum[j]); 
} 
  

int main() 
{ 
    int n,m;
    
    printf("Enter a decimal number:");
    scanf("%d",&n);

	if(isdigit(n))
	{
	  printf("you entered a number..");
	}
	else
	{
	  printf("enter only an integer number..");
	}
    
    printf("\n octal:");
    oct_cov(n); 
    
   printf("\n hexadecimal:"); 
    hex_cov(n); 
	
    return 0; 
}
