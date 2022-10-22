#include <iostream>
#include <string>

using namespace std;

int main(){
    int qntd;
    cin >> qntd;
    int desloc;

    while(qntd > 0){
        string cifra;
        cin >> cifra;
        cin >> desloc;

        for(int i=0; i<cifra.length(); i++){
            if(int(cifra[i]) < 65){
                cifra[i] = 90 - (64 - cifra[i] - desloc);
            } else if(int(cifra[i]) == 65){
                cifra[i] = char(91-desloc);
            } else{
                cifra[i] = cifra[i] - desloc;
            }
            cout << cifra[i];
        }
        cout << endl;

        qntd--;
    }

    return 0;
}


