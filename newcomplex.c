#include<stdio.h>
#include<assert.h>

struct complex{//we creat a structure with two components x & y.
        int x;
        int y;
}a,b,c,z;

struct complex mult2(struct complex a,struct complex b){/*this function takes
two complex structures and returns a complex structure representing their
product*/
        z.x=a.x*b.x-a.y*b.y;
        z.y=a.x*b.y+a.y*b.x;
        return z;
}

struct complex square(struct complex a){/*we define a function square that takes a complex structure and returns the square of that structure*/
        z=mult2(a,a);
        return z;
}

struct complex add2(struct complex a,struct complex b){/*this function takes 2 complex structures and returns their sum.*/
        z.x=a.x+b.x;
        z.y=a.y+b.y;
        return z;
}

struct complex juliamap(struct complex z,struct complex c){/*this function takes2 complex structures and returns juliamap.*/
        z=add2(square(z),c);
        return z;
}

void complex_print(struct complex z){/*this function takes a complex structure,"z", and prints z=x+yi.*/
        printf("z=%d+%d\n",z.x,z.y);
}

void test(){/*this function demonstrates that all of the functions defined above,work correctly.*/
        a.x=1.;
        a.y=3.;
        b.x=2.;
        b.y=1.;
        c=mult2(a,b);
        assert(c.x==-1.);
        assert(c.y==7.);
        printf("mult2 is correct.\n");
        c=square(a);
        assert(c.x==-8.);
        assert(c.y==6.);
        printf("square is correct.\n");
        c=add2(a,b);
        assert(c.x==3.);
        assert(c.y==4.);
        printf("add2 is correct.\n");
        c=juliamap(a,b);
        assert(c.x==-6.);
        assert(c.y==7.);
        printf("juliamap is correct.\n");
        complex_print(a);
        printf("If the previous sentence is 'z=1.000000+3.000000i', the function complex_print is working correctly.\n");
}

int main(){//this is main function that calls the function test and return 0.
        test();
        return 0;
}
