#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    cout << "************************************" << endl;
    cout << "* Bem-vindos ao jogo da advinha??o!*" << endl;
    cout << "************************************" << endl;
    cout << "Escolha a dificuldade que deseja:  " << endl;
    cout << "(F) F?cil (M) M?dio (D) Dif?cil  " << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if (dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if (dificuldade == 'M'){
        numero_de_tentativas = 10;
    } 
    else{
        numero_de_tentativas = 5;
    }     
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100 ;
    
    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {   
        int chute;
        cout << "Tentativa n? " << tentativas << endl;
        cout << "Qual seu chute? " << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO) /2.0;
        pontos -= pontos_perdidos;

        cout << "O valor do seu chute ?: " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;  

        if (acertou)
        {
            cout << "Parab?ns! Voc? acertou o n?mero secreto !!!" << endl;
            nao_acertou = false;    
            break;
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o n?mero secreto!" << endl;
        } 
        else
        {
            cout << "Seu chute foi menor que o n?mero secreto !" << endl;
        }
    }

    cout << " ******* FIM DE JOGO !!!! ******* " << endl;
    if(nao_acertou){
        cout << "Voc? perdeu, tente novamente!" << endl;
    } else {
            cout << "Voc? acertou em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed; 
        cout << "Sua pontua??o foi de " << pontos << " pontos." << endl;
    }
    cout << " ******* FIM DE JOGO !!!! ******* " << endl;
}
