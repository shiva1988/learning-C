#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"complex.h"

void test(){/*this function demonstrates that all of the functions defined above,work correctly.*/
        COMPLEX a,b,c;
        a.x=1.;
        a.y=2.;
        b.x=2.;
        b.y=3.;
        c=*mult2(&a,&b);
        assert(c.x==-4.);
        assert(c.y==7.);
        printf("mult2 is correct.\n");
        c=*square(&a);
        assert(c.x==-3.);
        assert(c.y==4.);
        printf("square is correct.\n");
        c=*add2(&a,&b);
        assert(c.x==3.);
        assert(c.y==5.);
        printf("add2 is correct.\n");
        c=*juliamap(&a,&b);
        assert(c.x==-1.);
        assert(c.y==7.);
        printf("juliamap is correct.\n");
        complex_print(&a);
        printf("If the previous sentence is 'z=1.000000+2.000000i', the function complex_print is working correctly.\n");
}



int main(){//this is main function that calls the function test and return 0.
        test();
        return 0;
}

