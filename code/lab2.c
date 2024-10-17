#include  <stdio.h>
#include <math.h>
int main ()
{
    float h;
    printf ("Введите шаг для x -> ");
    scanf("%f", &h);
    float x=-1.5;
    printf("%f, %f \n", h, x);
    do
    {
        float y=(pow(x,2)-2*(pow(x,3)))*(cos(pow(x,2)));
        printf("%f, %f \n", y, x);
        x=x+h;
    } while ((-1.5<=x) & (x<=0));
    do
    {
        
        float q=exp(sin(2*x));
        printf("%f; %f \n", q, x);
        x=x+h;
    } while ((0<x) & (x<=1.5));
    return 0;
}
