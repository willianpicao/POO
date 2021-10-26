#include <iostream>
#include <vector>
using namespace std;
class A{
  int x;
};

class B : public A{
  int y;
};

class C : public A{
  int z;
};

int main() {
  vector<A*> vetorExemplo;
  char c = 's', escolha;
  while(c=='s'){
    cout << "qual objeto deseja criar (B ou C?)" <<endl;
    cin >> escolha;
    if(escolha == 'B'){
      B novoObjetoB;
      vetorExemplo.push_back(&novoObjetoB);
    }else{
      C novoObjetoC;
      vetorExemplo.push_back(&novoObjetoC);
    }

    cout << "deseja continuar? (s ou n)";
    cin >> c;
  }
}