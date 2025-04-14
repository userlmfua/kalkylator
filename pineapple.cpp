#include <iostream>
double slozhenie (double one,double two)
{
    return one+two;
}
double vichitanie (double one, double two)
{
    return one-two;
}
double delenie (double one, double two)
{
    double otvet=0;
    if (two==0){exit(1);}
    else {
        otvet=one/two;
    }return otvet;
}
double ymnozhenie(double one,double two)
{
    return one*two;
}