/*From the previous homework, we have noticed that our fibonacci had produced so me negative numbers.
 *Such an unexpected result due to the limited range of an int.
 *This is called overflow or rollover.Once you go past the maximum number that c an be represented ,it rolls over and starts from the begining .
 *In this project , we aim at finding a better data type that will avoid us a 
 weird situation as seen with integer. for the best data type will be long 
 double.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fib(long double); //declare the prototype of the fib function.
int main()
{
	long double number;/*declare an integer variable that will hold the numbers that will be punch in by the user.*/
	printf(" Please my friend ismael give me an integer :");/*prompt the user to enter a number.*/
	scanf("%Lf",&number);

	fib(number);
return 0;
}
/*I explained all of things in the previous code,just we change here int to 
  longe doble*/
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
