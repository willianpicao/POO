#include <iostream>
#include <string>

using namespace std;
using std::string;

int main ()
{
    string s;
   
    cout << "Digite tua fraze meno: ";
    getline(cin,s);

    for (auto c:s){
        if(!isspace(c))
            cout<< c;
    }
}