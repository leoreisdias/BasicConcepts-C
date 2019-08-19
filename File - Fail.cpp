#include<bits/stdc++.h>
using namespace std;

int main(int argc, char * argv[])
{
	ifstream in("teste.txt");
	char c;

	while(true)
    {
        in >> c;
        if(in.fail()) // Verifica se o arquivo está vazio, ou seja, se falhou em ler
            break;
        cout << c;
    }
	return 0;
}
