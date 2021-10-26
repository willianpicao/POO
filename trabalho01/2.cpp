#include <iostream>
#include<string>

using namespace std;

class lampada
{
	public:
	bool ligada;
	string tipo;
	int voltagem;
	int potencia;
	
	void ligar() { ligada = true; }
	
	void desligar() { ligada = false; }
	
	void status()
	{
		if(ligada)
			cout << "lampada " << tipo << " esta ligada" << endl;
		else
			cout << "lampada " << tipo << " esta desligada" << endl;
	}
		 
	bool ehEconomica()
	{
		if(potencia < 40 ){
			cout << "A lampada " << tipo <<" eh economica\n";
			return true;
		}
		else{
			cout << "A lampada " << tipo <<" nao eh economica\n";
			return false;
		}
	}
};

int main()
{
	lampada lampada1, lampada2;
	
	lampada1.tipo = "incandescente";
	lampada1.potencia = 80;
	lampada1.voltagem = 220;
	
	lampada1.ligar();
	lampada1.status();
	lampada1.desligar();
	lampada1.status();
	lampada1.ehEconomica();
	
	lampada2.tipo = "led";
	lampada2.potencia = 35;
	lampada2.voltagem = 125;
	
	lampada2.ligar();
	lampada2.status();
	lampada2.desligar();
	lampada2.status();
	lampada2.ehEconomica();
}
