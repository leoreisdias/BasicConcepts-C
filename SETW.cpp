#include<bits/stdc++.h>
using namespace std;

class Pessoa
{
public:
    string nome;
    int idade;

    Pessoa(const string& nome, const int& idade)
    {
        this->nome = nome;
        this->idade = idade;
    }
};

int main(int argc, char * argv[])
{
	Pessoa p1("Leonardo Reis", 20);
	Pessoa p2("Vanessa Silva", 20);
	Pessoa p3("Maria Luiza",13);

	cout << setw(20) << "Nome Completo" << setw(10) << "Idade" << endl;
	cout << setw(20) << p1.nome << setw(10) << p1.idade << endl;
	cout << setw(20) << p2.nome << setw(10) << p2.idade << endl;
	cout << setw(20) << p3.nome << setw(10) << p3.idade << endl;

	return 0;
}
