#include <stdio.h>
#include <stdlib.h>

int main()
{
int a ;
printf("primeiro valor ");
scanf ("%i",&a);
fib(a);
}

int fib(a)
{
    int b;
    if (a==1 || a==2)
    {
        b=1;
    }
    else {
        b=fib(a-1) + fib(a-2);
    }
    printf (">>>>>> %i",b);
    return b;
}
