#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fib(int);
int main()
{
	int number;
	printf(" Please my friend ismael give me an integer :");/* I ask to user give me number*/
	scanf("%d",&number);

	fib(number);
return 0;
}

void fib(int n)//I define a function to generate fibonacci numbers.
{
	int i,f1,f2,fibo=0;
	f1=1;// we put f1=f2=1 based on fibonacci numbers.
	f2=1;
	if(n>=2)
	{
		printf("%d\n",f1);
		printf("%d\n",f2);
		for(i=3;i<=n;i++)
		{/*by using loop,we creat new number 
			that is sum of the previous two*/
			fibo=f1+f2;
			f1=f2;
			f2=fibo;
			printf("%d\n",fibo);
			//printf("\n");
		}
	}


}
