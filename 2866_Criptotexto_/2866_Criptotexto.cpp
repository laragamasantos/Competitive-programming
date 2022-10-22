#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int qntd;
    cin >> qntd;

    while(qntd > 0){
        string mensagem;
        string resposta;
        int aux = 0;
        cin >> mensagem;

        reverse(mensagem.begin(), mensagem.end());

        for(int i=0; i<mensagem.length(); i++){
            if(islower(mensagem[i])){
                resposta[aux] = mensagem[i];
                 cout << resposta[aux];
                aux++;
            }
        }
        cout << '\n';

        qntd--;
        aux = 0;
    }



    return 0;
}