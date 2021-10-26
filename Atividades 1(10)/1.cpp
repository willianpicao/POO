#include <iostream>
#include <string>

using namespace std;
using std::string;

int main()
{
    string s1, s2;
    int cont1, cont2;
    cont1=0;
    cont2=0;

    cout << "Informe a primeira string\n";
    cin >> s1;

    cout << "Informe a segunda string\n";
    cin >> s2;

    for(auto c : s1)
        cont1++;

    for(auto c : s2)
        cont2++;

    if(cont1 > cont2)
        cout << "Maior string eh:" << s1 << endl;
    else if(cont1 < cont2)
        cout << "Maior string eh:" << s2 << endl;
    else
        cout << "as strings sao iguais" << endl;
}


