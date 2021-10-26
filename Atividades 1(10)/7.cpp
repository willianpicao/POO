#include <iostream>
#include <string>

using namespace std;
using std::string;

typedef struct triangulo{
        int bas,dir,esq;
}trig;

int main ()
{
    trig triangulo;
    cout<< "\nInforme respecstivamente os valores da base, lado direito e esquerdo do triangulo: ";
    cin>>triangulo.bas>>triangulo.dir>>triangulo.esq;
    if (triangulo.bas==triangulo.dir)
        cout<<"\nTriangulo nao escaleno...";
    else if(triangulo.bas==triangulo.esq)
        cout<<"\nTriangulo nao escaleno...";
    else if(triangulo.dir==triangulo.esq)
        cout<<"\nTriangulo nao escaleno...";
    else
        cout<<"\nTriangulo eh escaleno...";

}