#include <iostream>

using namespace std;

//1)______________________________________________

/*
template <class t, class u>
t maximum ( const t &v1, const u &v2 ){
    if ( v1 < v2 )  return v2;
    else            return v1;
}

int main()
{
    string word1, word2;
    word1= "abc";
    word2= "abcd";

    cout<< maximum(word1,word2)<< endl;

    int x=10, y=20;

    cout<< maximum(x,y)<<endl;

    double xx=10.50, yy=20.50;

    cout<< maximum(xx,yy)<<endl;

    
}
*/

//2)______________________________________________
/*
class Pair {
public:
 Pair(const int& t, const int& u)
 : first(t), second(u)
 {}
 int& get_first() { return first; }
 int& get_second() { return second; }
 const int& get_first() const { return first; }
 const int& get_second() const { return second; }
private:
 int first;
 int second;
};
void print_pair(const Pair& p)
{
 std::cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}
*/
template <class T>
class Pair  {
    private:
        T first;
        T second;
    public:
        Pair(const T &x, const T &y)
        : first(x), second(y)
        {}
        T& get_first() { return first; }
        T& get_second() { return second; }
        const T& get_first() const { return first; }
        const T& get_second() const { return second; }

        T adiciona_pairs(const T &a,const T &b){
           T result;
           result = a + b;
           return result;
        }
};

template <class U>
void print_pair(const U &p){
    cout << '(' << p.get_first() << ", " << p.get_second() << ")\n";
}

int main ()
{
    Pair<int> p1(5, 20);
    print_pair(p1);

    Pair<double>p2(6.7,87.5);
    print_pair(p2);

    string a="ab", b="c";
    Pair<string> word(a,b);
    print_pair(word);
}