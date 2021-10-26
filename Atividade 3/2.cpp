#include <iostream>

using namespace std;

class FormaGeometrica
{
    public:
        virtual void calculaArea()=0;
        virtual void oi(){
            cout << "oi, sou uma forma geometrica"<<endl;
        }

};

class Retangulo : public FormaGeometrica
{
    private:
        int a,b;
    public:
        Retangulo():a(0),b(0){}
        Retangulo(int a,int b){this->a=a,this->b=b;}
        void setA(int a){this->a=a;}
        void setB(int b){this->b=b;}
        int getA(){return a;}
        int getB(){return b;}

        void calculaArea()override{
            int area= (getA())*(getB());
            cout <<"Area= "<<area;
        }

        virtual void oi()override{
            cout <<"oi, sou um retangulo"<<endl;
        }
};

int main (){
    FormaGeometrica *form;

    Retangulo ret(2,2);
    ret.calculaArea();
    cout << endl;

    form=&ret;
    form->oi();


}
//  a) ocorre um erro, pois a classe Retangulo esta Herdando uma classe abstrada com o metodo puramente virtual
//logo esta classe filha(retangulo) deve alterar a classe puramente do pai(classe abstrada(FormaGeometrica))
//  b)n sobrescreve, pq calcura area sem override sera um metado da classe filha
//  c)erro com um conflito no tipo de retorno
//  d)se vc chamar oi() de um objeto Retangulo a partir de um ponteiro de um objeto FormaGeometrica 
//ele vai imprimir a mensagem da classe pai, pq vc n sobrescreveu na classe filha a mensagem desejada.