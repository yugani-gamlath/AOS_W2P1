#include <stdio.h>

int main(void)
{

	int sum = 0;
	
	for(int x = 21; x < 911; x = x + 3)
	{
		sum = sum + x;
	}

	printf("The sum of multiples of 3 between 21 and 911 is %d. \n ", sum);
	
	return(0);

}
