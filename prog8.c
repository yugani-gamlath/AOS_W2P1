#include <stdio.h>

int main(void)
{

	int sum = 0;
	int x = 21;
	
	while(x < 911)
	{
	
		sum = sum + x;
		x = x + 3;

	}
	
	printf("The sum of multiples of 3 between 21 and 911 is %d. \n", sum);
	
	return(0);

}
