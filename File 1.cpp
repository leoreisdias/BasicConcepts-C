// Abrir um arquivo para entrada
// Ler o conte�do desse arquivo

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[])
{
    ifstream in("teste.txt");

    string texto;

    char c = in.get(); //.get() retorna o pr�ximo caracter de "in", que por sua vez possui os dados do arquivo.
    texto.push_back(c);

    cout << "\nMostrando cada caractere:\n";

    while(in.good()) //.good() verifica se ainda � possivel retirar caracter do Arquivo.
    {
        cout << c;
        c = in.get();
        texto.push_back(c);
    }
    cout << "\n";
    cout << endl << texto << endl;
	return 0;
}
