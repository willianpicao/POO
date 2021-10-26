#include <iostream>

using namespace std;

class Triangulo
{   //atributos da classe triangulo
	public:
	int base;
	int altura;
	//metodos da classe triangulo
	void calculaArea()
	{
		int resultado;
		resultado= (base*altura)/2;
		cout << "Area do triangulo eh igual a= " << resultado << endl;
	}
};

int main()
{
	Triangulo T1,T2;
	
	cout << "Digite o valor da base : " ;
	cin >> T1.base;
	
	cout << "Digite o valor da altura : " ;
	cin >> T1.altura;
	
	cout << "Triangulo 1\n" ;
	T1.calculaArea();
//-------------------------------
	cout <<"Triangulo 2\n";
	cout << "Digite o valor da base : " ;
	cin >> T2.base;
	
	cout << "Digite o valor da altura : " ;
	cin >> T2.altura;
	
	T2.calculaArea(); 

}
