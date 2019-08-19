#include<bits/stdc++.h>
using namespace std;

class classeMae
{
public:
    virtual void mostrarMensagem()
    {
        cout << "Ola eu sou a classe Mae\n";
    }
};

class classeFilha : public classeMae
{
public:
    void mostrarMensagem()
    {
        cout << "Ola eu sou a classe Filha\n";
    }
};

void foo(classeMae* p){
    p->mostrarMensagem();
}

int main(int argc, char* argv[])
{
    classeMae mae;
    classeFilha filha;

    foo(&mae);
    foo(&filha);
    return 0;
}
