#include <iostream>
#include <string>

using namespace std;
using std::string;

const int m = 5;

int posicaoMax(int vet[],int max,int min){
    min=vet[0];
    max=vet[0];
    int pos=0,i=0;
    for (int i=0;i<m;i++){
        if(vet[i]<min)
            min=vet[i];
    }
    for (int i=0;i<m;i++){
        if(vet[i]>max)
            max=vet[i];
    }
    while (vet[i]!=max){
        pos=pos+1;
        i++;
    }
    return pos;
}
int main()
{
    int vet[m];
    int min,max;
    for (int i=0;i<m;i++){
        cout<< "Digite um valor: ";
        cin>>vet[i];
    }
    int posMax;
    posMax=posicaoMax(vet,max,min);
    cout << "A posição do maior valor eh: "<< posMax;
}