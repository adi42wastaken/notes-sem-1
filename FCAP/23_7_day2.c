/*
We'll do some numericals in the first lecture with C programming in second class. 
first line...called pre processor mechanism
to include files, do 
*/

#include <stdio.h>
int main(){
    // printing stuff
    printf("something should always end with ; in C \n");
    //declarationn statement,assignment statements
    int a,b,c;
    a=5,b=10;
    c=a+b;
    printf("The sum of %d and %d is %d\n",a,b,c);
    //%d,%f,etc are called format specfier, okiedokie, fuck.

    //All 5 basic operators
    float x,y;
    x=10.5,y=2.5;
    printf("The sum of %f and %f is %f\n",x,y,x+y);
    printf("The difference of %f and %f is %f\n", x, y, x - y);
    printf("The product of %f and %f is %f\n", x, y, x * y);
    printf("The ratio of %f and %f is %f\n", x, y, x / y);
    printf("In the first one, %d mod %d is %d\n",a,b,a%b);

    // Characters
    char p='A';
    char q=35;
    printf("This mf charcter p='A' has character value %c, and has an integer value of %d\n",p,p);
    printf("This mf charcter q=35 has character value %c, and has an integer value of %d\n", q, q);
    return 0;
}