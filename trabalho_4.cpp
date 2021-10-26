#include <iostream>
#include <vector>
using namespace std;
using std::istream;


class Cartao {
    private:
        string destinatario;
        friend istream &operator>> (istream &is, Cartao &Cartaox);
    public:
        Cartao():destinatario("X"){}
        Cartao(string destinatario){this->destinatario=destinatario;}

        virtual void mensagem()=0;
        string getDestinatario(){return destinatario;}
        
};

istream &operator>> (istream &is, Cartao &Cartaox){
    is >> Cartaox.destinatario;
    if (is)
        return is;
    else
        cout<<"ERROR"<<endl;
}

class CartaoNatal : public Cartao{ 
    public:
        void mensagem()override{
            cout<<"Feliz Natal "<< getDestinatario() <<"!!!" << endl;
        }
};

class CartaoAniversario : public Cartao{ 
    public:
        void mensagem()override{
            cout<<"Feliz Aniversario "<< getDestinatario() <<"!!!" << endl;
        }
};

int main ()
{
    string X;
    vector<Cartao*> vetCartoes;

    cout<<"---Voce deseja criar cartao de Natal ou Aniversario ?"<<endl;
    cin >> X;

    if (X=="natal"){
        cout<<"#Cartao de Natal selecionado."<<endl;
        int cont=0;
        string c="s";
        while (c=="s"){
            CartaoNatal novoCartaoNatal;
            cout<<"---Informe o destinatario para cartao("<<cont<<")."<<endl;
            cin>>novoCartaoNatal;
            cont=cont+1;
            vetCartoes.push_back(&novoCartaoNatal);
            cout<<"#Deseja continuar? (Digite sim ou nao)"<<endl;
            cin>>c;
        }
        for (auto c: vetCartoes)
            c->mensagem();

    }


    if (X=="aniversario"){
        cout<<"#Cartao de Aniversario selecionado."<<endl;
        int cont=0;
        string c="s";
        while (c=="s"){
            CartaoAniversario novoCartaoAniversario;
            cout<<"---Informe o destinatario para cartao("<<cont<<")."<<endl;
            cin>>novoCartaoAniversario;
            cont=cont+1;
            vetCartoes.push_back(&novoCartaoAniversario);
            cout<<"#Deseja continuar? (Digite sim ou nao)"<<endl;
            cin>>c;
        }
        for (auto c: vetCartoes)
            c->mensagem();

    }
    
    return 0;

}