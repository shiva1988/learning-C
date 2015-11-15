#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fib(int);
int main()
{
	int number;
	printf(" Please my friend ismael give me an integer :");
	scanf("%d",&number);

	fib(number);
return 0;
}

void fib(int n)
{
	int i,f1,f2,fibo=0;
	f1=1;
	f2=1;
	if(n>=2)
	{
		printf("%d\n",f1);
		printf("%d\n",f2);
		//printf("\n");
		for(i=3;i<=n;i++)
		{
			fibo=f1+f2;
			f1=f2;
			f2=fibo;
			printf("%d\n",fibo);
			//printf("\n");
		}
	}


}
