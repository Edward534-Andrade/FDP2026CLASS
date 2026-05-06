#include <iostream>
using namespace std;

int main(){

    int puntaje;
    cout << "Ingrese su puntaje, (1-5):"<< endl;
    cin >> puntaje;
    switch(puntaje) {
        case 1:
        cout << "Tu puntaje es muy malo" << endl;
            break;
        case 2:
            cout << "Tu puntaje es malo" << endl;
            break;
        case 3:
            cout << "Tu puntaje es normal, puedes mejorar!!" << endl;
            break;
        case 4:
            cout << "Tu puntaje es muy bueno, segui asi!!" << endl;
            break;
        case 5:
        cout << "Tu puntaje es excelente FELICIDADES!!!!" << endl;
            break;
        default:
        
            cout << "error: Numero invalido. Por favor ingrese del 1 al 5." << endl;
            break;
    }

    return 0;
}
