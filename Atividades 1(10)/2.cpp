#include <iostream>
#include <string>
using namespace std;
using std::string;

int main ()
{
    string s;
    cin >> s;
    int cont=0;
    for (auto c: s)
        cont++;
    for (int i=cont; i>=0; i--)
        cout<< s[i];
}