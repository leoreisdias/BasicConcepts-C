// Sobrecarga do Operador =

#include<bits/stdc++.h>
using namespace std;

class Pessoa
{
public:

    void inicializar(const char* novoNome, int novoID)
    {
        int tam = strlen(novoNome) + 1;
        nome = new char[tam];
        strcpy(nome,novoNome);
        id = novoID;
    }
    Pessoa(const char* novoNome, int novoID)
    {
        inicializar(novoNome,novoID);
    }

    void destruir()
    {
        delete[] nome;
        nome = 0;
    }

    virtual ~Pessoa()
    {
        destruir();
    }

    Pessoa& operator=(Pessoa& p)
    {
        if(this != &p){
            destruir();

            inicializar(p.nome,p.id);
        }

        return *this;
    }

    Pessoa(Pessoa& p)
    {
        inicializar(p.nome,p.id);
    }

    const char* getNome()
    {
        return nome;
    }
    int getID()
    {
        return id;
    }

    void mudarNome(char l)
    {
        nome[0] = l;
    }

private:
    char * nome;
    int id;
};


int main(int argc, char * argv[])
{
    Pessoa p1("Marcos",1), p2("Pedro",2);

    p1 = p2;

    p1.mudarNome('A');

    cout << "Nome: " << p1.getNome() << endl << "ID: " << p1.getID() << endl;
    cout << "Nome: " << p2.getNome() << endl << "ID: " << p2.getID() << endl;

    return 0;
}
