#include <iostream>
using namespace std;

int main ()
{
    int n,fatorial;
    cout<< "informe um valor: ";
    cin >>n;
    fatorial=1;
    for(int i=n; i > 1; i--)
          fatorial = fatorial * i;
    cout<< "fatorial eh: "<< fatorial;
}