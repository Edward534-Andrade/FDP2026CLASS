#include <iostream>
using namespace std;

int main(){

    int transporte;
    cout << "Ingrese un numero del (1-3) 1:Bus, 2: Metro, 3: Taxi:"<< endl;
    cin >> transporte;
    switch(transporte) {
        case 1:
        cout << "Su costo estimado es $0.75" << endl;
            break;
        case 2:
            cout << "Su costo estimado es $1.50" << endl;
            break;
        case 3:
            cout << "Su costo estimado es $4.99" << endl;
            break;
        default:
            cout << "error: Numero invalido. Por favor ingrese del 1 al 5." << endl;
            break;
    }

    return 0;
}
