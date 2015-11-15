#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fib(long double);
int main()
{
	long double number;
	printf(" Please my friend ismael give me an integer :");
	scanf("%Lf",&number);

	fib(number);
return 0;
}

void fib(long double n)
{
	long double i,f1,f2,fibo=0;
	f1=1;
	f2=1;
	if(n>=2)
	{
		printf("%Lf\n",f1);
		printf("%Lf\n",f2);
		//printf("\n");
		for(i=3;i<=n;i++)
		{
			fibo=f1+f2;
			f1=f2;
			f2=fibo;
			printf("%Lf\n",fibo);
			//printf("\n");
		}
	}


}
