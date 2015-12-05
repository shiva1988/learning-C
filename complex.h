#include<stdio.h>
#include<assert.h>

typedef struct complex{long double x,y;}COMPLEX;
COMPLEX a,b,c,z;
//typedef struct complex COMPLEX;

COMPLEX *mult2(const COMPLEX *a,const COMPLEX *b);
COMPLEX *square(const COMPLEX *a);
COMPLEX *add2(const COMPLEX *a,const COMPLEX *b);
COMPLEX *juliamap(const COMPLEX *a,const COMPLEX *b);
void complex_print(const COMPLEX *a);
void test();
