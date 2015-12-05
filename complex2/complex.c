#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"complex.h"

COMPLEX *mult2(COMPLEX *a,COMPLEX *b){/*this function takes
two complex structures and returns a complex structure representing their
product*/
        z.x=a->x*b->x-a->y*b->y;
        z.y=a->x*b->y+a->y*b->x;
        //p=&z;
        return &z;
}

COMPLEX *square(COMPLEX *a){/*we define a function square that takes a complex structure and returns the square of that structure*/
        return mult2(a,a);
        //p=&z;
        //return p;
}

COMPLEX *add2(COMPLEX *a,COMPLEX *b){/*this function takes 2 complex structures and returns their sum.*/
        z.x=a->x+b->x;
        z.y=a->y+b->y;
        //p=&z;
	return &z;
COMPLEX *juliamap(COMPLEX *a,COMPLEX *b){/*this function takes2 complex structures and returns juliamap.*/
        return add2(square(a),b);
        //z=&p;
        //return p;
}

void complex_print(COMPLEX *a){/*this function takes a complex structure,"z", and prints z=x+yi.*/
        printf("&z=%Lf+%Lf\n",a->x,a->y);
}

void test();//{/*this function demonstrates that all of the functions defined above,work correctly.*/
        /*COMPLEX a,b,c;
	a.x=1.;
        a.y=2.;
        b.x=2.;
        b.y=3.;
	c=*mult2(&a,&b);
        assert(c.x==-4.);
        assert(c.y==7.);
        printf("mult2 is correct.\n");
        c=*square(*a);
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
	
