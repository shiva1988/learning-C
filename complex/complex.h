#include<stdio.h>

typedef struct complex {
  long double x;
  long double y;
} COMPLEX;

void set(COMPLEX *c, long double a, long double b);
COMPLEX mult2(COMPLEX *a, COMPLEX *b);
COMPLEX square(COMPLEX *a);
COMPLEX add2(COMPLEX *a,COMPLEX *b);
COMPLEX juliamap(COMPLEX *a, COMPLEX *b);
void complex_print(COMPLEX *a);
COMPLEX get_result(char *name, COMPLEX *a, COMPLEX *b);
void assert_function(char *function, COMPLEX *a, COMPLEX *b, long double cx, long double cy);
