#include <iostream>
using namespace std;

int main()
{

    int mes;
    cout << "Ingrese su mes de nacimiento, para mostrar su signo zodiacal correspondiente, (1:Enero 2:Febrero...):" << endl;
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << " tu signo Zodiacal es Acuario" << endl;
        break;
    case 2:
        cout << " tu signo Zodiacal es Piscis" << endl;
        break;
    case 3:
        cout << " tu signo Zodiacal es Aries" << endl;
        break;
    case 4:
        cout << " tu signo Zodiacal es Tauro :" << endl;
        break;
    case 5:
        cout << " tu signo Zodiacal es Géminis" << endl;
        break;
    case 6:
        cout << " tu signo Zodiacal es Cáncer" << endl;
        break;
    case 7:
        cout << " tu signo Zodiacal es Leo" << endl;
        break;
    case 8:
        cout << " tu signo Zodiacal es virgo" << endl;
        break;
    case 9:
        cout << " tu signo Zodiacal es Libra" << endl;
        break;
    case 10:
        cout << " tu signo Zodiacal es Escorpio" << endl;
        break;
    case 11:
        cout << " tu signo Zodiacal es Sagitario" << endl;
        break;
    case 12:
        cout << " tu signo Zodiacal es Capricornio" << endl;
        break;
    default:
        cout << "error: Numero invalido. Por favor ingrese del 1 al 12." << endl;
        break;
    }

    return 0;
}