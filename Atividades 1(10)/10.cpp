#include <iostream>
#include <string>

using namespace std;
using std::string;

int incrementa(int valor){
    return valor+1;
}

int main ()
{
    int valor,resultado;
    cout<<"\nDigite um valor: ";
    cin>>valor;
    resultado=incrementa(valor);
    cout<<"O valor incrementado eh= "<<resultado;
}