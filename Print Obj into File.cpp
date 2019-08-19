#include<bits/stdc++.h>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
public:
    string& getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }

    void setNome(string& nome)
    {
        this->nome = nome;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    //ostream = output stream
    friend ostream& operator<<(ostream& os, const Pessoa& p)
    {
        os << "\n" << p.nome << "\n";
        os << p.idade;
        return os;
    }

    friend istream& operator>>(istream& is, Pessoa& p)
    {
        is >> p.nome >> p.idade;
        return is;
    }
};

char menu()
{
    char resp;
    cout << "Digite 1 para inserir pessoas\n";
    cout << "Digite 2 para lista pessoas\n";
    cout << "Digite 0 para sair\n";
    cin >> resp;
    return resp;
}

int main(int argc, char * argv[])
{
    char resp;
    while(true)
    {
        resp = menu();
        if(resp=='1')
        {
            Pessoa pessoa;
            string nome;
            int idade;
            //app = append -> Adiciona ao final do arquivo.
            ofstream ofs("pessoas.txt",fstream::app);

            cout << "Digite o nome da pessoa\n";
            cin >> nome;
            cout << "Digite a idade da pessoa\n";
            cin >> idade;
            cout << endl;

            pessoa.setNome(nome);
            pessoa.setIdade(idade);

            ofs << pessoa;

            ofs.close();
        }
        else if(resp=='2')
        {
            ifstream in("pessoas.txt");
            Pessoa p;
            if(in.good())
            {
                while(!in.eof())
                {
                    in >> p; //extrai os dados do arquivo colocando no obj p da classe Pessoa.
                    cout << "Nome: " << p.getNome() << endl;
                    cout << "Idade: "<< p.getIdade() << endl;
                }
                in.close();
            }
            else
                cout << "Falha\n";
        }
        else if(resp=='0'){
            cout << "Bye Bye\n\n";
            break;
        }
    }
	return 0;
}
