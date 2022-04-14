/* C Program to Find Prime Factors of a Number using For Loop */
 
#include <stdio.h>
 
int main()
{
  	int i, j, Number, isPrime; 
   
  	printf("\n Please Enter any number to Find Factors :  ");
  	scanf("%d", &Number);
 
  	for (i = 2; i <= Number; i++)
   	{
     	if(Number % i == 0)
        {
   			isPrime = 1;
			for (j = 2; j <= i/2; j++)
			{
				if(i % j == 0)
				{
					isPrime = 0;
					break;
				}
			} 
			if(isPrime == 1)
			{
				printf("%d is a Prime Factor\n", i);
			}	          	
		}
   }
  	return 0;
}
