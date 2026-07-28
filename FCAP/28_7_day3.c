// Reading inputs
//Scanf("%format specifier(d)",&vari_name);
#include <stdio.h>
int main(){
    int a,b,c,d;

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
    printf("The difference of first three, i.e, %d - (%d) - (%d) is 10%d\n",a,b,c,a-b-c);
    return 0;
}