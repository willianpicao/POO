#include <iostream>
using namespace std;

int main ()
{
    int N,n;
    cout << "Digite o valor de N ";
    cin >>N;
    int v[N];
    for (int i=0;i<N;i++){
        cout<< "Digite um valor" << " ";
        cin>>v[i];
    }
    cout << "Digite a quantidade dos n primeiros numeros que vc quer calcular o quadrado\n";
    cout << "obs: valor de n precisa ser <=N: ";
    cin>>n;
    int v2[n];
    if (n<=N){
        for (int i=0;i<n;i++)
            v2[i]=(v[i])*(v[i]);
        cout<<"Os quadrados dos primeiros n valores do vetor N sao: ";
        for (int i=0;i<n;i++)
            cout<< v2[i] << " ";
    }else {
        cout << "Impossivel fazer operacao, pois o valor de n foi maior que N";
    }

}