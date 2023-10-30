//calculator function using pass by value
//changes for branching in Git
#include <stdio.h>
#include <stdlib.h>

int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divi(int x, int y);

int main()
{
		int result, a, b, ch;
		printf("Enter number1:");
		scanf("%d", &a);
		printf("Enter number2:");
        scanf("%d", &b);
		for(;;)
		{
		printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Exit\nEnter your choice:");
		scanf("%d", &ch);
		switch(ch)
		{
				case 1: result = add(a, b);
						printf("Result = %d\n", result);
						break;

				case 2: result = sub(a, b);
						printf("Result = %d\n", result);
						break;

				case 3: result = mul(a, b);
						printf("Result = %d\n", result);
						break;

				case 4: result = divi(a, b);
						printf("Result = %d\n", result);
						break;

				case 5: exit(0);
						break;

				default: printf("Enter valid number\n");
		}
		}
		return 0;
}

int add(int x, int y)
{
		return x+y;
}

int sub(int x, int y)
{
        return x-y;
}

int mul(int x, int y)
{
        return x*y;
}

int divi(int x, int y)
{
        if(y != 0)
		{
			return x/y;
		}
		else
		{
				printf("Division by zero error\n");
				return 0;
		}
}
