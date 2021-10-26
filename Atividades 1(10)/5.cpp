#include <iostream>
#include <string>
#include <math.h>

using namespace std;
using std::string;

struct ponto
{
    int x;
    int y;
};


int main ()
{
  
   ponto p1;
   ponto p2;
   float result;


   cout <<"\nDigite as coordernadas do ponto 1: ";
   cin >>p1.x>>p1.y;

   cout <<"\nDigite as coordernadas de ponto 2: ";
   cin >>p2.x>>p2.y;

   result= (     ( (p2.x-p1.x)*(p2.x-p1.x) ) + ( (p2.y-p1.y)*(p2.y-p1.y) )     );
   result= sqrt(result);

   cout << "\nA distancia entre estes dois ponto eh de: "<<result<<"\n"<< endl;





}