#include <iostream>
using namespace std;

int main(){

    int dia;
    cout << "Ingrese un dia de la semana, (1-7):"<< endl;
    cin >> dia;
    switch(dia) {
        case 1:
        cout << "7:00-8:45AM : Precalculo" << endl;
        cout << "8:45-10:45AM : Ciencias" << endl;
        cout << "10:45-12:45PM : Fundamentos de programacion" << endl;
        cout << "1:30PM-3:30PM : Matematica Discreta" << endl;
            break;
        case 2:
            cout << "9:00-10:45AM : Practica de laboratorio de ciencias" << endl;
            cout << "1:30-3:10PM : Practica de laboratorio de fundamentos de programcion" << endl;
            break;
        case 3:
        cout << "7:00-8:45AM : Precalculo" << endl;
        cout << "8:45-10:45AM : Ciencias" << endl;
        cout << "10:45-12:45PM : Fundamentos de programacion" << endl;
        cout << "1:30PM-3:30PM : Matematica Discreta" << endl;
            break;
        case 4:
            cout << "NO TIENES CLASES!!!!" << endl;
            break;
        case 5:
        cout << "7:00-7:45AM : Discucion de Precalculo" << endl;
        cout << "8:00-8:45AM : Discucion de Matematicas Discreta" << endl;
            break;
            case 6:
            cout << "NO TIENES CLASES!!!!" << endl;
            break;
            case 7:
            cout << "NO TIENES CLASES!!!!" << endl;
            break;
        default:
        
            cout << "error: Numero invalido. Por favor ingrese del 1 al 7." << endl;
            break;
    }

    return 0;
}
