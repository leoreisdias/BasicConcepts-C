#include<bits/stdc++.h>
using namespace std;

int gerarID()
{
// Retem o valor. Mesmo voltando na linha em que � declarada, manter� o valor em que est�. Ex.: id n�o voltar� a ser 0 na linha de declara��o,continua o msm
    static int id=0;
    return id++;
}

int main(int argc, char * argv[])
{
    int i=0;
	char nome[15];
	while(i<3)
    {
        static int k=0; // N�o ser� redeclarada como zero ao voltar a executar essa linha.
        cout << "Nome: "; cin.get(nome,10); getchar();
        cout << "Gerando ID: " << gerarID() << endl;
        cout << "Casos: " << k << endl;
        cout << nome << endl;
        k++;
        i++;
    }
	return 0;
}
