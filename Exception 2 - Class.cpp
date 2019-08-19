#include<bits/stdc++.h>
using namespace std;

class CustomException : public exception
{
protected:
    char msg[100];
public:
    CustomException(const char* e)
    {
        strcpy(msg,e);
    }

    virtual const char* what()
    {
        return msg;
    }
};

int fat(int n)
{
    if(n < 0)
        throw CustomException("Numero negativo!\n");
    if(n == 0 || n == 1)
        return 1;
    return n * fat(n-1);
}

int main(int argc, char * argv[])
{
	try
	{
	    cout << "Fatorial de 5: " << fat(5) << endl;
	    cout << "Fatorial de -5: " << fat(-5) << endl;
	}
	catch(CustomException e)
	{
	    cerr << "Erro: " << e.what() << endl;
	}
	catch(...)
	{
	    cerr << "Erro Inesperado!" << endl;
	}
	return 0;
}
