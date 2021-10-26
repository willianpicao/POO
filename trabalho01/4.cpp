#include <iostream>
#include<string>

using namespace std;

class partida
{
	public:
	string nomeMan, nomeVis;
	int golMan, pontMan;
	int golVis, pontVis;
	
	void resultado(string nomeMan, int golMan, string nomeVis, int golVis)
	{
		cout << "nome do time mandante:" << endl;
		cin >> nomeMan;
		this->nomeMan = nomeMan;
		
		cout << "nome do time visitante:" << endl;
		cin >> nomeVis;
		this->nomeVis = nomeVis;
		
		cout << "numero de gols do time mandante:" << endl;
		cin >> golMan;
		this->golMan = golMan;
		
		cout << "numero de gols do time visitante:" << endl;
		cin >> golVis;
		this->golVis = golVis;
	}
	
	void calculaPontos()
	{
		pontMan = 0;
		pontVis = 0;

		for(int i=0; i<golMan; i++)
			pontMan +=2;
		for (int i=0; i<golVis; i++)
			pontVis +=2;
		
		cout << "numeros de pontos do Mandante: " << this->pontMan << endl;
		cout << "numeros de pontos do Visitante: " << this->pontVis << endl;
	}
	
	void mostraResultado()
	{
		cout << this->nomeMan << " " << this->golMan << " x " << this->golVis << " " << this->nomeVis << endl;
	}
};
		
int main()
{
	partida p1,p2;
	//-----------------------------------
	cout<< "Iniciando partida 1\n" << endl;
	string time1, time2;
	int gol1, gol2;
	
	p1.resultado(time1, gol1, time2, gol2);
	p1.calculaPontos();
	p1.mostraResultado();
	//----------------------------------
	cout<< "Iniciando partida 2\n" << endl;
	string time1_2, time2_2;
	int gol1_2, gol2_2;
	
	p2.resultado(time1, gol1_2, time2_2, gol2_2);
	p2.calculaPontos();
	p2.mostraResultado();
}
