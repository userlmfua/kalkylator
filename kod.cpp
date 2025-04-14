#include <iostream>
#include <cmath>
#include <cstdlib>
#include "pineapple.h"
using namespace std;
double calculator (double one,char znak, double two)
{
switch(znak)
{
    case '+': return slozhenie(one, two);break; 
    case '-': return vichitanie(one, two);break; 
    case '/': return delenie(one, two);break;
    case '*': return ymnozhenie(one, two);break;  
}
return 0;
}
int main(int argc, char** argv)
{if(argc>=3)
{
double one=atof(argv[1]);
double two=atof(argv[3]);
char znak=argv[2][0];
double result=calculator(one, znak, two);
cout<<"Otvet: "<<one<<" "<<znak<<" "<<two<< " = "<<result<< endl;
}
return 0;
}
