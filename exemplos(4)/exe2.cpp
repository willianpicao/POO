#include <iostream>
using namespace std;
int main()
{
    int n,soma;
    cout << "Digite o valor de N ";
    cin >>n;
    int v[n];
    for (int i=0;i<n;i++){
        cout<< "Digite um valor" << " ";
        cin>>v[i];
    }
    soma=0;
    for (int i=0;i<n;i++){
        if((v[i]%2)==0)
            soma=soma+v[i];
    }
    cout<< "A soma dos numeros pares eh igual a: " << soma;
}
