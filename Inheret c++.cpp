#include<bits/stdc++.h>
using namespace std;

class animal{
protected:
    char* nome;
    bool voa;
    int patas;

public:
    animal(const char* nome){
        cout << "Construindo Animal\n";
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome,nome);
        voa=false;
        patas=0;
    }
    ~animal(){
        delete[] nome;

        nome=0;
    }
    const char* getNome(){
        return nome;
    }
    int getPatas(){
        return patas;
    }
};

class cachorro : public animal{
protected:
    int idade;
public:
    cachorro(const char* nome) : animal(nome)
    {
        cout << "Construindo Cachorro\n";
        idade=0;
    }
    int getIdade()
    {
        return idade;
    }
    void setIdade(int idade)
    {
        this->idade = idade;
    }
};
int main(int argc,char * argv[])
{
    cachorro c("Yank");
    c.setIdade(5);
    cout << "Nome: " << c.getNome()<<endl;
    cout << "Idade: "<< c.getIdade()<<endl;
return 0;
}
