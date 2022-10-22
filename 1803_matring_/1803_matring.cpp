#include <string>
#include <iostream>

using namespace std;

int main()
{
    int j = 0, i = 0, aux = 0;
    string matring[4];
    int F;
    int L;

    for (int i = 0; i < 4; i++)
    {
        cin >> matring[i];
    }

    int tamanho = matring[0].length();
    int inteiro;
    int ascii[tamanho-2];
    char colunas[4];
    char resposta[tamanho-2];

    for (j = 0; j < tamanho; j++){
        for (i = 0; i < 4; i++){
            colunas[i] = matring[i][j];
        }
        inteiro = atoi(colunas);
        if(j == 0){
            F = inteiro;
        } else if(j == tamanho-1){
            L = inteiro;
        } else {
            ascii[aux] = inteiro;
            aux++;
        }

    }

    for(int k=0; k<(tamanho-2); k++){
        resposta[k] = char((F * ascii[k] + L) % 257);
        cout << resposta[k];
    }

    cout << "\n";

    return 0;
}
