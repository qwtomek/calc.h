/* calc - definicje */
#include "calc.hpp"
#include <cstdlib>
double suma(double a, double b)
{
    return a+b;
}

double roznica(double a, double b)
{
    return a-b;
}

double iloczyn(double a, double b)
{
    return a*b;
}

double iloraz(double a, double b)
{
    return a/b;
}

int reszta(int a, int b)
{
    return a%b;
}

double kwadrat(double a)
{
    return a*a;
}

double szescan(double a)
{
    return a*a*a;
}

double potega(double a, int st) //<cstdlib>
{
    double x=a;
    if (a==0 && st <=0) exit(-1);
    else if (a==0)
        return 0;
    for(int i=1; i<st; i++)
    {
        x*=a;
    }
    return x;
}

double silnia(double a)
{
    if (a==0)
        return 1;
    else
        return a*silnia(a-1);
}
