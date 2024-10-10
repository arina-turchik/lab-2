#include  <stdio.h>
#include <math.h>
int main ()
{
    float h;
    printf ("Введите шаг для x -> ");
    scanf("%f", h);
    float x=-1.5;
    do
    {
        float y=(pow(x,2)-2*(pow(x,3)))*(cos(pow(x,2)));
        printf("%f \n", y);
        x=x+h;
    } while (-1.5<=x<=0);
    do
    {
        float y=exp(sin(2*x));
        printf("%f \n", y);
        x=x+h;
    } while (0<x<=1.5);
}
