#include <iostream>

using namespace std;


class Produto
{
    private:
        float preco;
        string nomeProduto;
    public:
        Produto():preco(0),nomeProduto("x"){}
        Produto(float preco,string nomeProduto){this->preco=preco,this->nomeProduto=nomeProduto;}

        void setPreco(float preco){this->preco=preco;}
        void setNomeProduto(string nomeProduto){this->nomeProduto=nomeProduto;}

        float getPreco(){return preco;}
        string getNomeProduto(){return nomeProduto;}
};

class ComboProduto
{
    private:
        int quantidadeItens;
        float totalValor;
        friend ComboProduto combinarProdutos(Produto &produto1, Produto &produto2);
    public:
        ComboProduto():quantidadeItens(0),totalValor(0){}
        ComboProduto(int quantidadeDeItens,float totalValor){quantidadeItens=quantidadeDeItens,this->totalValor=totalValor;}

        void setQuantidadeDeItens(int quantidadeItens){this->quantidadeItens=quantidadeItens;}
        void setTotalValor(float totalValor){this->totalValor=totalValor;}

        int getQuantidadeDeItens(){return quantidadeItens;}
        float getTotalValor(){return totalValor;}

};

ComboProduto combinarProdutos(Produto produto1,Produto produto2 ){
    float valorTotal;
    valorTotal = (produto1.getPreco()+produto2.getPreco()) -  ( ( (produto1.getPreco()+produto2.getPreco())*0.15 ) );
    ComboProduto out(2,valorTotal);
    return out;
}

int main (){
    Produto produto1,produto2;
    produto1.setNomeProduto("Shampoo");
    produto1.setPreco(12.50);
    cout << "Produto 1(" <<produto1.getNomeProduto()<<") "<< "de valor: "<<produto1.getPreco()<<endl;

    produto2.setNomeProduto("Condicionador");
    produto2.setPreco(15.50);
    cout << "Produto 2(" <<produto2.getNomeProduto()<<") "<< "de valor: "<<produto2.getPreco()<<endl;

    cout<<"__TOTAL__"<<endl;
    ComboProduto total;
    total=combinarProdutos(produto1,produto2);
    cout<<"Quantidade de itens("<<total.getQuantidadeDeItens()<<")"<<endl;
    cout<<"Preco total= "<<total.getTotalValor()<<endl;
}
