#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int d, vf, vg, limite=12, tempoFuga, tempo;

    while(cin >> d >> vf >> vg){
        tempoFuga = limite/vf;
        tempo = sqrt((pow(d,2))/(pow(vg,2) - pow(vf,2))); //tempo para ambos se encontrarem

        if(tempo > tempoFuga){
            cout << 'N' << endl;
        } else{
            cout << 'S' << endl;
        }
    }

    return 0;
}