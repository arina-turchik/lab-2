#include  <stdio.h>
#include <math.h>
int main ()
{
    float h;
    printf ("Введите шаг для x -> ");
    scanf("%f", &h);
    float x=-1.5;
    printf("%f, %f \n", h, x);
    while ((-1.5<=x) & (x<=0))
    {
        float y=(pow(x,2)-2*(pow(x,3)))*(cos(pow(x,2)));
        printf("%f, %f \n", y, x);
        x=x+h;
    }
    while ((0<x) & (x<=1.5+h/2))
    {
        
        float q=exp(sin(2*x));
        printf("%f; %7.4f \n", q, x);
        x=x+h;
    }
    return 0;
}
