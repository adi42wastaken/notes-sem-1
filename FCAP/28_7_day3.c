// Reading inputs
//Scanf("%format specifier(d)",&vari_name);
#include <stdio.h>
#include <math.h>
int main(){
   /* int a,b,c,d;

    printf("Enter four integers, I'll do something to them.\n");
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    printf("Enter d: ");
    scanf("%d", &d);

    printf("The sum of them all is %d\n",a+b+c+d);
    printf("Product of first two is %d\n",a*b);
    printf("The difference of first three, i.e, %d - (%d) - (%d) is 10%d\n",a,b,c,a-b-c);*/
    // floating point approximation error. 

    /*float a,b,c;
    printf("Enter two numbers");
    scanf("%f%f",&a,&b);
    c=a+b;
    if(c==0.3)
        {
        printf("The sum is 0.3\n");
        }
    else
        {
        printf("The sum is not 0.3\n");
        }
    printf("The sum of %f and %f is %0.17f\n", a, b, c); */
    // Write a C program to check if a person is eligible for voting or not.
    /* double age;
    printf("Enter your age pretty baby boi, don't lie, okay? :3 \n");
    scanf("%lf", &age);
    if(age>=18)
    {printf("Uh oh! You are eligible, don't vote Trump");}
    else if(age<18 && ceil(age)-age==0)
    {printf("Sorry, can't vote yet");}
    else
    {printf("Not an integer dumbass!");} */
    // Write a C program to check if a number is even or not
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if (num%2==0)
    {printf("Number is even");}
    else 
    {printf("Number is odd");}
    return 0;
}