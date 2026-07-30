/*Approximation, error, machine epsilon
Algorithms, flowcharts, etc*/
#include <stdio.h>
#include <math.h>
int main()
{
/*   float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    c=a>b?a:b;
    if(a==b)
        {
        printf("Both are equal broski");
        }
    else
        {
        printf("The larger number is %.0f",c);
        }
*/
    int n;
    scanf("%d",&n);
    register int m=n;
    int k=1;
    int l = log10(n) + 1;
    int p=(m%10)*10^(l-1);
    printf("%d\n",l);
    printf("The number entered is %d\n",n);
    while(n/10^k>0)
        {
         p=((m%(10^k)/(10^(k-1))))*10^(l-k);
         printf("%d\n",p);
        k++;
    }
    printf("Is the palindrom %d",p);
    return 0;
}