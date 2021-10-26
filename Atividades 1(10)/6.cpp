#include <iostream>
#include <string>

using namespace std;
using std::string;

struct retangulo{
    int x;
    int h;
};
typedef retangulo rtg;

rtg areaRetangulo(rtg *ret){
    int base;
    int altura;
    int result;
    rtg auxiliar;
    base=ret->x;
    altura=ret->h;
    result=base*altura;
    auxiliar.x=result;
    return auxiliar;
    

}

int main ()
{
    rtg retangulo,area;
    cout<< "\nDigite o valor da base, e a altura do retangulo: ";
    cin>>retangulo.x>>retangulo.h;
    area=areaRetangulo(&retangulo);
    cout << "\narea = "<<area.x;

    

}