// *  Write a C program to find factorial of a number
#include <stdio.h>
#include <math.h>

void main(){
    /*printf("Enter an integer: ");
    int a;
    int n=1;
    scanf("%d",&a);
    if(a>0 && floor(a)-a==0)
    {
        for (int i = a; i > 0; i--)
        {
            n = n * i;
        }
        printf("%d! is %d", a, n);
    }
    else 
    {printf("Invalid input!");}*/
    int n, f1=0,f2=1,f;
    printf("Enter how many terms you want: ");
    scanf("%d", &n);
    printf("0, 1, ");
    for(int i=3;i<n+1;i++){
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d, ",f);
    }
}
// Write a C program towrite a fibonacci sequence and then reframe using for loop.
