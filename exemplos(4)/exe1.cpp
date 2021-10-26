#include <iostream>
using namespace std;

int main ()
{
    int n,soma;
    float media;
    cout << "Digite o valor de N ";
    cin >>n;
    int v[n];
    for (int i=0;i<n;i++){
        cout<< "Digite um valor " << " ";
        cin>>v[i];
    }
    soma=0;
    for (int i=0;i<n;i++){
        soma=soma+v[i];
    }
    media = soma/n;

    cout << "A soma eh " << soma;
    cout << "a media eh " << media;
}

