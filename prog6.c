#include <stdio.h>
#include <stdlib.h>

double calculate(char *operation, double *num1, double *num2);

int main(void)
{

	char operation;
	double num1, num2, result;
	
	printf("\n Enter the Operation: ");
	scanf("%c", &operation);
	
	printf("\n Enter the first value: ");
	scanf("%lf", &num1);
	
	printf("\n Enter the second value: ");
	scanf("%lf", &num2);
	
	result = calculate(&operation, &num1, &num2);
	
	printf("\n The result is %lf \n", result);
	
	return(0);
	
}

double calculate(char *operation, double *num1, double *num2)
{
	double result;

	switch (*operation)
	{
	
		case('a'):
		{
			result = *num1 + *num2;
			return result;
		}
		
		case('A'):
		{
			result = *num1 + *num2;
			return result;
		}
		
		case('+'):
		{
			result = *num1 + *num2;
			return result;
		}
		
		case('s'):
		{
			result = *num1 - *num2;
			return result;
		}
		
		case('S'):
		{
			result = *num1 - *num2;
			return result;
		}
		
		case('-'):
		{
			result = *num1 - *num2;
			return result;
		}
		
		case('m'):
		{
			result = *num1 * *num2;
			return result;
		}
		
		case('M'):
		{
			result = *num1 * *num2;
			return result;
		}
		
		case('*'):
		{
			result = *num1 * *num2;
			return result;
		}
		
		case('d'):
		{
			if(*num2 != 0.0)
			{
				result = *num1 / *num2;
				return result;
			}
			
			else
			{
				printf("Devide by zero errror. ");
				exit(0);
			}
		}
		
		case('D'):
		{
			if(*num2 != 0.0)
			{
				result = *num1 / *num2;
				return result;	
			}
			
			else
			{
				printf("Devide by zero error. ");
				exit(0);
			}
		}
		
		case('/'):
		{
			if(*num2 != 0.0)
			{
				result = *num1 / *num2;
				return result;
			}
			
			else
			{
				printf("Devide by zero error. ");
				exit(0);
			}
		}
		default:
		{
			printf("Invalid Operation. ");
			exit(0);
		}
		
	}

	
}








