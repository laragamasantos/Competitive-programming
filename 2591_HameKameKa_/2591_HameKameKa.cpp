#include <string>
#include <iostream>

using namespace std;

int main(){
    int qntd, contador1, contador2, produto; 
    bool controle = true;
    cin >> qntd;

    while(qntd != 0){
        contador1 = 0;
        contador2 = 0;
        produto = 0;
        string ataque;
        cin >> ataque;

        for(int i=0; i<ataque.length(); i++){
            if(ataque[i] == 'a' && controle){
                contador1++;
            } else if(ataque[i] == 'm'){
                controle = !controle;
            } else if(ataque[i] == 'a' && controle == false){
                contador2++;
            }
        }
        cout << 'k';
        produto = contador1 * contador2;
        while(produto != 0){
            cout << 'a';
            produto--;
        }
        qntd--;
        cout << '\n';

    }
    return 0;
}