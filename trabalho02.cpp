#include <iostream>

using namespace std;

class estudoNivel_0
{
    private:
        string nome;
        int cod;
        
    protected:
        float rendaBasica;
    public:
        estudoNivel_0():nome("x"),cod(0),rendaBasica(0){}
        estudoNivel_0(string name,int cod,float rendaBasica){
            this->nome=nome;
            this->cod=cod;
            this->rendaBasica=rendaBasica;
        }

        void setRendaBasica(float RendaBasica){this->rendaBasica=rendaBasica;}
        void setNome(string nome){this->nome=nome;}
        void setCod(int cod){this->cod=cod;}

        string getNome(){return nome;}
        int getCod(){return cod;}
        virtual float getRendaBasica(){return rendaBasica;}
};

class estudoNivel_1 : public estudoNivel_0
{
    private:
        string nomeEscola;
    public:
        estudoNivel_1():nomeEscola("x"){
            estudoNivel_0();
        }
        estudoNivel_1(string nome,int cod,string nomeEscola,float rendaBasica){
            estudoNivel_0(nome,cod,rendaBasica);
            this->nomeEscola=nomeEscola;
        }

        void setNomeEscola(string nomeEscola){this->nomeEscola=nomeEscola;}
        string getNomeEscola(){return nomeEscola;}


        virtual float bonus(float rentaBasica){
            float x;
            x=rendaBasica * (10/100);
            return x;
        }
        float getRendaBasica()override{
            return rendaBasica+bonus(rendaBasica);
        }




};

class estudoNivel_2 : estudoNivel_1
{
    private:
        string nomeEscolaESM;
    public:
        estudoNivel_2():nomeEscolaESM("x"){
            estudoNivel_1();
        }
        estudoNivel_2(string nome, int cod,string nomeEscola,string nomeEscolaESM,float rendaBasica){
            estudoNivel_1(nome,cod,nomeEscola,rendaBasica);
            this->nomeEscolaESM=nomeEscolaESM;
        }
        void setNomeEscolaESM(string nomeEscolaESM){this->nomeEscolaESM=nomeEscolaESM;}
        string getNomeEscolaESM(){return nomeEscolaESM;}

        float bonus(float rentaBasica)override{
            float x;
            x=rendaBasica * (50/100);
            return x;
        }
};

class estudoNivel_3 : public estudoNivel_2
{
    private:
        string nomeFacul;
    public:
        estudoNivel_3():nomeFacul("x"){
            estudoNivel_2();
        }
        estudoNivel_3(string nome,int cod,string nomeEscola,string nomeEscolaESM, string nomeFacul,float rendaBasica){
            estudoNivel_2(nome,cod,nomeEscola,nomeEscolaESM,rendaBasica);
            this->nomeFacul=nomeFacul;
        }
        void setNomeFacul(string nomeFacul){this->nomeFacul=nomeFacul;}

        float bonus(float rentaBasica)override{
            float x;
            x=rendaBasica+rendaBasica;
            return x;
        }


};



int main()
{
    estudoNivel_0 cara1("marcelo",20191172201,1000);
    cout<<cara1.getRendaBasica()<<endl;
    estudoNivel_1 cara2("pedro",20191172202,"pedacin do ceu",1000);
    cout<<cara2.getRendaBasica();
    estudoNivel_2 cara3("paulin",20191172203,"aparecidinha","paulo freire",1000);
    cout<<cara3.getRendaBasica();
    estudoNivel_3 cara4("Gilmar",2019112204,"pedacin do ceu","paulo freire","UFMT",1000);
    cout<< cara4.getRendaBasica();
}