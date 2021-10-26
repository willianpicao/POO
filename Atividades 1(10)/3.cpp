#include <iostream>
#include <string>
using namespace std;
using std::string;

int main ()
{
    string s;
    int cont=1;
    cout << "Digite tua fraze meno: ";
    getline(cin,s);
    for (auto c:s){
        if (isspace(c))
            cont++;
    }
    cout << "O numero de palavras eh: " << cont << endl;
}