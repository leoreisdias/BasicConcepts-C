#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    string str="leonardo";
    cout << str << endl;

    cout << str.at(3) << endl;

    string str2="Reis";
    str = str + " " + str2;
    cout << str << endl;

    str.append(" Dias");
    cout << str << endl;

    str.push_back('o'); //Inseri um caracter no final da String
    cout << str << endl;

    str.insert(0,"Ola "); //Inseri na String na posição informada como primeiro parametro.
    str.insert(7," Haha ");
    cout << str << endl;

    cout << "\n";
    str.erase(0,4); //Apaga da String do primeiro parametro até o segundo.
    cout << str << endl;

    str.clear(); //Limpa tudo.

    if(str.empty()) // Verifica em Boolean se está Vazia ou Não.
        cout << "\nString Vazia!" << endl;
    else
        cout << "\nString Nao Vazia!"<<endl;

    cout << "\n";

    str = "Leonardo Reis";
    cout << str << endl;
    str.replace(9,12,"Dias"); // Troca os valores do primeiro até o segundo parametro para o valor do terceiro parametro.
    cout << str << endl;

    size_t achou = str.find("leo"); // Procura um caracter ou substring, retornando seu valor em Bytes de tipo size_t(valor em Bytes de qualquer variavel.
    if(achou != 0)
        cout << "Achou substring\n";
    else
        cout << "Não Achou substring\n";


    return 0;
}
