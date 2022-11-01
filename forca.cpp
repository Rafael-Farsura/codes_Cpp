#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main(){
    string palavra_secreta = "mMELANCIA";
    cout << palavra_secreta << endl;
    
    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){
        char chute;
        cout << "Digite o seu Chute: "
        cin >> chute;
        
        cout << "O seu chute foi " << chute << endl; 

    }
    

}
