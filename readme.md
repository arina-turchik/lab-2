# Лабораторная работа №2 
## Задача
### Разобраться в создании программ с циклами.
#### Вариант задания - 9
<image src="problem var.png" alt="вариант задание">

## Ход работы:
1. Разобраться в работе с циклами `for`, `while` и `do while`.
2. Разобраться в работе с командой `gnulop`.
3. Составить блок-схему по алгоритму написания программы.
4. Написать код с использованием `while`.
5. Написать код с использованием `for`.
6. Вывести график с помощью `gnulop`.
7. Переместить в репозиторий на `github` результаты работы.

### Блок-схема
<image src = diagram.png alt="блок-схема">

### Код с циклом `while`

```#include  <stdio.h>
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
```

### Код с циклом `for`
```
#include  <stdio.h>
#include <math.h>
int main ()
{
    float h;
    printf ("Введите шаг для x -> ");
    scanf("%f", &h);
    float x=-1.5;
    printf("%f, %f \n", h, x);
    for ((-1.5<=x) & (x<=0))
    {
        float y=(pow(x,2)-2*(pow(x,3)))*(cos(pow(x,2)));
        printf("%f, %f \n", y, x);
        x=x+h;
    }
    for ((0<x) & (x<=1.5+h/2))
    {
        
        float q=exp(sin(2*x));
        printf("%f; %7.4f \n", q, x);
        x=x+h;
    }
    return 0;
}
 ```

## Результат работы gnuplot
<image src=graphscr.png alt="результат работы гнуплот">