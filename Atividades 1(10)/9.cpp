#include <iostream>
#include<string>

using namespace std;
using std::string;
void troca(int x,int y){
    int X,Y,Z;
    X=x;
    Y=y;
    Z=x;
    cout << "\nTrocando Valores...";
    X=Y;
    Y=Z;
    cout <<"\n(2)o Primeiro valor dps da troca: "<< X <<"\n(2)Segundo valor dps da troca: "<< Y <<endl;

}
int main()
{
    int val1,val2;
    cout<<"Digite o primeiro, e segundo valor.......";
    cin>>val1>>val2;
    cout<<"(1)O primeiro valor antes da troca: "<<val1<<"\n(1)O segundo valor antes da troca: "<<val2;
    troca(val1,val2);

}