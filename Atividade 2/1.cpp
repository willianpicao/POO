#include <iostream>
#include <string>
#include<math.h>

using namespace std;
using std::string;

class VeiculoAVenda 
{
    private://Atributos:        _________________________________________________________________
        string marca, modelo;
        int ano;
        float precoDeVenda;

    public://métodos:           _________________________________________________________________
        //métodos construtores
        VeiculoAVenda (): marca("X"),modelo("X"),ano(0),precoDeVenda(0){}
        VeiculoAVenda (string marca, string modelo, int ano, float precoDeVenda){
            this->marca=marca;
            this->modelo=modelo;
            this->ano=ano;
            this->precoDeVenda=precoDeVenda;
        }
        //métodos modificadores
        void setMarca(string marca){
            this->marca=marca;
        }
        void setModelo(string modelo){
            this->modelo=modelo;
        }
        void setAno(int ano){
            this->ano=ano;
        }
        void setPrecoDeVenda(float precoDeVenda){
            this->precoDeVenda=precoDeVenda;
        }
        //métodos seletores
        string getMarca(){return marca;}
        string getModelo(){return modelo;}
        int getAno(){return ano;}
        float getPredoDeVenda(){return precoDeVenda;}

        //métodos
        virtual void mostraDados(){
            cout << "Marca: "<< marca << endl;
            cout << "Modelo: "<< modelo << endl;
            cout << "ano: "<< ano << endl;
            cout << "Preco A Venda: "<< precoDeVenda << endl;
        }
};

class AutomovelAVenda: public VeiculoAVenda
{
    private://Atributos
        float motor;
        bool cambioAutomatico,manual;
        int qtdPortas;
    
    public://métodos
        //métodos construtores
        AutomovelAVenda():motor(0.0),cambioAutomatico(false),manual(false),qtdPortas(1){
            VeiculoAVenda();
        }
        AutomovelAVenda(string marca, string modelo,int ano,float precoDeVenda,float motor, bool cambioAutomatico,bool manual, int qtdPortas){
            VeiculoAVenda(marca,modelo,ano,precoDeVenda);
            this->motor=motor;
            this->cambioAutomatico=cambioAutomatico;
            this->manual=manual;
            this->qtdPortas=qtdPortas;
        }
        //métodos modificadores
        void setMotor(float motor){
            this->motor=motor;
        }
        void setCambioAutomatico(bool cambioAutomatico){
            this->cambioAutomatico=cambioAutomatico;
        }
        void setManual(bool manual){
            this->manual=manual;
        }
        void setQtdPortas(int qtdPortas){
            this->qtdPortas=qtdPortas;
        }
        //métodos seletores
        float getMotor(){return motor;}
        bool getCambioAutomatico(){return cambioAutomatico;}
        bool getManual(){return manual;}
        int getQtdPortas(){return qtdPortas;}

        //métodos
        void mostraDados()override{
            cout << "Marca: "<<getMarca()<<endl;
            cout << "Modelo: "<<getModelo()<<endl;
            cout << "Ano: "<<getAno()<<endl;
            cout << "Preco de Venda: "<<getPredoDeVenda()<<endl;

            cout << "Motor: "<< motor<< endl;
            cout << "Eh Cambio automatico: "<< cambioAutomatico<< endl;
            cout << "Eh Manual: "<< manual<< endl;
            cout << "Quantidade de portas: "<< qtdPortas<< endl; 
        }
};

class MotocicletaAVenda : public VeiculoAVenda 
{
    private://Atributos
        float cilindrada;
    public://métodos
        //métodos construtores
        MotocicletaAVenda():cilindrada(0.0){
            VeiculoAVenda();
        }
        MotocicletaAVenda(string marca, string modelo,int ano,float precoDeVenda,float cilindrada){
            VeiculoAVenda(marca,modelo,ano,precoDeVenda);
            this->cilindrada=cilindrada;
        }
        //métodos modificadores
        void setCilindrada(float cilindrada){
            this->cilindrada=cilindrada;
        }
        //métodos seletores
        float getCilindrada(){return cilindrada;}
        //métodos
        void mostraDados()override{
            cout << "Marca: "<<getMarca()<<endl;
            cout << "Modelo: "<<getModelo()<<endl;
            cout << "Ano: "<<getAno()<<endl;
            cout << "Preco de Venda: "<<getPredoDeVenda()<<endl;

            cout << "Cilindradas: "<< cilindrada<< endl;
        }
};

int main()
{
    VeiculoAVenda v1;
    v1.mostraDados();

    v1.setMarca("Honda");
    v1.setModelo("Sedan");
    v1.setAno(2019);
    v1.setPrecoDeVenda(45000);
    v1.mostraDados();

    AutomovelAVenda a1;
    a1.mostraDados();

    a1.setMarca("hyndai");
    a1.setModelo("sedan");
    a1.setAno(2020);
    a1.setPrecoDeVenda(30000);
    a1.setMotor(2.0);
    a1.setCambioAutomatico(true);
    a1.setQtdPortas(4);
    a1.mostraDados();

    MotocicletaAVenda m1;
    m1.mostraDados();

    m1.setMarca("honda");
    m1.setModelo("a21RTX");
    m1.setAno(2020);
    m1.setPrecoDeVenda(16000);
    m1.setCilindrada(1.6);
    m1.mostraDados();

    VeiculoAVenda totalPreco;
    totalPreco.setPrecoDeVenda( (a1.getPredoDeVenda()) + (v1.getPredoDeVenda()) + (m1.getPredoDeVenda()) );
    cout<<"Preco total de vendas= "<<totalPreco.getPredoDeVenda()<<endl;
}
