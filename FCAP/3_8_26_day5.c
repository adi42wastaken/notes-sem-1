/*Write a C program where pi is defined on the # thingy*/
#include <stdio.h>
#define p 3.14159
#define fc 5/9
#include <math.h>
/*void main() {
    float r;
    printf("Please enter the value of radius so that I can find the area of the circle with that goofy ahh radius.");
    scanf("%f", &r);
    printf("The area is %f mathafakarrrr", p*r*r);
}
Write a C program where we find temp in c, but that factor is defined on the #thingy void main()
{
    float f;
    printf("Temp in faranhite: ");
    scanf("%f", &f);
    printf("Temp in Celsius is %f", (f - 32) * fc);
}*/
// Solvinf quadratic equation
void main() {
    float a,b,c,d,x1,x2;
    d=pow(b,2)-4*a*c;
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a==0){
        printf("Not a quadratic dumbass, anyways the root is just %f", -c/b);
    }
    else if (d==0){
        printf("There's a double root, it is %f",-b/(2*a));
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The two roots are %f and %f", x1, x2);
    }
    else if (d < 0)
    {
        x1 = sqrt(-d) / (2 * a);
        x2 = -sqrt(-d) / (2 * a);
        printf("The two roots are %f + %fi and %f - %fi", -b / (2 * a), x1, -b / (2 * a), x2);
    }
    else {
        printf("tf did you wrote for a,b,c?!");
    }
}