#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class objetoGeometrico
{
    private:
        int dimen1,dimen2;
    public:
        objetoGeometrico():dimen1(0),dimen2(0){}
        objetoGeometrico(int dimen1,int dimen2){this->dimen1=dimen1,this->dimen2=dimen2;}

        void setDimen1(int dimen1){this->dimen1=dimen1;}
        void setDimen2(int dimen2){this->dimen2=dimen2;}

        int getDimen1(){return dimen1;}
        int getDimen2(){return dimen2;}

        virtual void mostraDados(){
            cout<<"Dimensao 1: "<<dimen1<< endl;
            cout<<"Dimensao 2: "<<dimen2<< endl;
            cout<<"perimetro(obj geo): "<<perimetro()<<endl;
            cout<<"area(obj geo): "<<area()<<endl;
        }
        virtual float perimetro(){
            float result;
            result= (2*getDimen1()) + (2*getDimen2());
            return result;
        }
        virtual float area(){
            float result;
            result=getDimen1()*getDimen2();
            return result;
        }
};

class circulo: public objetoGeometrico
{
    private:
        int x,y,raio;
    public:
        circulo():x(0),y(0),raio(0){}
        circulo(float x,float y,float raio){this->x=x,this->y=y,this->raio=raio;}

        void setX(float x){this->x=x;}
        void setY(float y){this->y=y;}
        void setRaio(float raio){this->raio=raio;}

        int getRaio(){return raio;}
        int getX(){return x;}
        int getY(){return y;}

        
        float perimetro()override{
            float result;
            result= 2*3.14*getRaio();
            return result;
        }
        float area()override{
            float result;
            result= 3.14* ( getRaio()*getRaio() );
            return result;

        }
        void mostraDados()override{
            cout<< "Cordenada: "<< x <<","<<y<<endl;
            cout<<"Raio: "<< raio<<endl;
            cout<<"Perimetro(circulo): "<<perimetro()<<endl;
            cout<<"Area(circulo): "<<area()<<endl;


        }
};

class retangulo : public objetoGeometrico
{
    private:
        float b,h;
    public:
        retangulo():b(0),h(0){}
        retangulo(int b,int h){this->b=b,this->h=h;}
        void setB(int b){this->b=b;}
        void setH(int h){this->h=h;}
        float getB(){return b;}
        float getH(){return h;}
        float perimetro()override{
            float result;
            result= (2*getB()) + (2*getH());
            return result;
        }
        float area()override{
            float result;
            result=getB()*getH();
            return result;
        }
        void mostraDados()override{
            cout<< "B: "<<b<<endl;
            cout<<"H: "<< h<<endl;
            cout<<"Perimetro(retangulo): "<<perimetro()<<endl;
            cout<<"Area(retangulo): "<<area()<<endl;
        }

};

class triangulo: public objetoGeometrico
{
    private:
        float a,b,c;
    public:
        triangulo():a(0),b(0),c(0){}
        triangulo(float a,float b,float c){this->a=a,this->b=b,this->c=c;}
        void setA(float a){this->a=a;}
        void setB(float b){this->b=b;}
        void setC(float c){this->c=c;}
        float getA(){return a;}
        float getB(){return b;}
        float getC(){return c;}


        float ehc (){//ehc= "S"
            float result;
            result= ( (getA()) + (getB()) + (getC()) ) / 2;
            return result;
        }
        float perimetro()override{
            float result;
            result=ehc()*2;
            return result;
        }
        float area()override{
            float result;
            result= sqrt( ehc()* ( ehc()-getA())* (ehc()-getB())* (ehc()-getC()) );
            return result;
        }
        void mostraDados()override{
            cout <<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
            cout<<"c: "<<c<<endl;
            cout<<"Perimetro(triangulo): "<<perimetro()<<endl;
            cout<<"Area(triangulo): "<<area()<<endl;


        }
};
int main ()
{
    objetoGeometrico obgG(2,2);
    triangulo triang(2,2,2);
    circulo circ(2,2,4);
    retangulo ret(2,2);

    objetoGeometrico *perimetros;
    perimetros=&obgG;
    cout<<"Perimetro do Objeto geometrico: "<<perimetros->perimetro()<<endl;
    perimetros=&triang;
    cout<<"Perimetro do Triangulo: "<<perimetros->perimetro()<<endl;
    perimetros=&circ;
    cout<<"Perimetro do Circulo: "<<perimetros->perimetro()<<endl;
    perimetros=&ret;
    cout<<"Perimetro do Retangulo: "<<perimetros->perimetro()<<endl;
}
