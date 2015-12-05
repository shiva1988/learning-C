#include<stdio.h>
#include"complex.h"

void test();

int main(){
  test();
  return 0;
}

void test(){
  COMPLEX A,B,C;
  // Setting three vectors to test the functions
  set(&A, 1.0, 3.0);
  set(&B, 2.0, 1.0);
  set(&C, 2.0, -2.0);
  // Testing the fuction mult2 by comparing its result with the result calculated by hand
  assert_function("mult2", &A, &B, -1.0, 7.0);
  // Testing the fuction square by comparing its result with the result calculated by hand
  assert_function("square", &A, &B, -8.0, 6.0);
  // Testing the fuction add2 by comparing its result with the result calculated by hand
  assert_function("add2", &A, &B, 3.0, 4.0);
  // Testing the fuction juliamap by comparing its result with the result calculated by hand
  assert_function("juliamap", &A, &B, -6.0, 7.0);
  // Testing the print function (this test requires the user to check what is printed on the screen)
  complex_print(&A);
  complex_print(&C);
  printf("If the two previous sentences are respectively 'z=1.000000+3.000000i' and 'z=2.000000-2.000000i', the function complex_print is working correctly.\n");
}
