#include <stdio.h>

void select_gender(char x);

int main(void)
{

	char input;
	
	printf("Enter the   character for your gender: ");
	scanf("%c", &input);
	select_gender(input);
	
	return(0);
	
}

void select_gender(char x)
{

	if((x == 'f') || (x == 'F'))
	{
		printf("You are a female. \n");
	}
	
	else if((x == 'm') || (x == 'M'))
	{
		printf("You are a Male. \n");
	}
	
	else
	{
		printf("Invalid gender. \n");
	}
	
}






