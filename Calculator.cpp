#include<stdio.h>
#include<math.h>
int main()
{
	char choice;
	float add,product,divide,sub,power,n1,n2;
	printf("\n==========Calculator==========");
	for(int a=1;a>0;a++){
	printf("\n\n\n\nChoose the Operation  +  -  x  /  %  ^ , q to quit: ");
	scanf(" %c",&choice);
	if(choice=='q')
	{
	printf("\nTerminating the program!");
	break;
	}
	else if(choice!='+'&&choice!='x'&&choice!='/'&&choice!='^'&&choice!='-'&&choice!='%'){
	printf("\nInvalid Choice! Try again");continue;
	}
	switch(choice)
	{
		case '%':
			{
				int a,b,rem;
				printf("\nEnter the first number: ");
				scanf("%d",&a);
				printf("\nEnter the second number: ");
				scanf("%d",&b);
				if(b==0)
				{
					printf("\n0 Cannot be used!");
					break;
				}
				else
				{
					rem=a%b;
					printf("\n\n==========Modulus Function(Remainder)==========");
				printf("\n\n       Result = %d",rem);
				break;
				}
			}
		case '+':
			{
				printf("\nEnter the first number: ");
				scanf("%f",&n1);
				printf("\nEnter the second number: ");
				scanf("%f",&n2);
				printf("\n\n==========Addition==========");
				add=n1+n2;
				printf("\n\n       Result = %.1f",add);
				break;
			}
		case '-':
			{
				printf("\nEnter the first number: ");
				scanf("%f",&n1);
				printf("\nEnter the second number: ");
				scanf("%f",&n2);
				printf("\n\n==========Subtraction==========");
				sub=n1-n2;
				printf("\n\n       Result = %.1f",sub);
				break;
			}
		case '/':
			{
				printf("\nEnter the first number: ");
				scanf("%f",&n1);
				printf("\nEnter the second number: ");
				scanf("%f",&n2);
				if(n2==0)
				{
					printf("\nDivision by 0 is not possible!");
					break;
				}
				printf("\n\n==========Division==========");
				divide=n1/n2;
				printf("\n\n       Result = %.1f",divide);
				break;
			}
		case 'x':
			{
				printf("\nEnter the first number: ");
				scanf("%f",&n1);
				printf("\nEnter the second number: ");
				scanf("%f",&n2);
				printf("\n\n==========Multiplication==========");
				product=n1*n2;
				printf("\n\n       Result = %.1f",product);
				break;
			}
		case '^':
			{
				printf("\nEnter the first number: ");
				scanf("%f",&n1);
				printf("\nEnter the second number: ");
				scanf("%f",&n2);
				printf("\n\n==========Power==========");
				power=pow(n1,n2);
				printf("\n\n       Result = %.1f",power);
				break;
			}
	}
}
}
