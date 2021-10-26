#include <iostream>
#include<string>

using namespace std;

class empregado
{
	public:
	string nome;
	float salario;
	
	void aumento(float porcentagem)
	{
		int novosalario;
		novosalario=salario+(salario*(porcentagem/100));
		cout << "salario com aumento de " << porcentagem << " eh de " << novosalario << "\n" << endl;
	}
	
	void mostraDados()
	{
		cout << "nome: " << nome << endl;
		cout << "salario: " << salario << endl;
	}
};

int main()
{
	empregado emp1, emp2;
	
	emp1.nome = "lucas santos";
	emp1.salario = 750;
	
	emp1.mostraDados();
	emp1.aumento(100);
	
	emp2.nome = "dilma roucefi";
	emp2.salario = 9999;
	emp2.mostraDados();
	emp2.aumento(1.0);
}
	
	
