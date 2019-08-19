#include<bits/stdc++.h>

using namespace std;

class Language
{
    friend void friendClass(Language);
protected:
          char name[100];

public:
    void mostrarNome(){
        cout << name << endl;
    }
    void setNome(const char* name){
        strcpy(this->name,name);
    }
};
void friendClass(Language l){
    cout << l.name <<endl;
}

int main(int argc, char * argv[]){
    Language l;
    l.setNome("C++");


    friendClass(l);
return 0;
}
