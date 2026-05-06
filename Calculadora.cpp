#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b;
    cout << "Ingrese el primer nuemro: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    // Operaciones aritmeticas
    int suma = a + b;
    int diferencia = a - b;
    int producto = a * b;
    int division = a / b;
    int Modulo = fmod(a, b);
    int exponenciacion = pow(a, b);

    int opciones;
    cout << "Ingrese un numero del (1-6) 1:suma, 2: resta, 3: producto 4: division 5: modulo 6: exponenciacion:" << endl;
    cin >> opciones;
    switch (opciones)
    {
    case 1:
        cout << "Su suma total es: " << suma << endl;
        break;
    case 2:
        cout << "Su resta total es: " << diferencia << endl;
        break;
    case 3:
        cout << "Su multiplicacion total es: " << producto << endl;
        break;
    case 4:
        cout << "Su division total es: " << division << endl;
        break;
    case 5:
        cout << "Su modulo total es: " << Modulo << endl;
        break;
    case 6:
        cout << "Su suma total es: " << exponenciacion << endl;
        break;

    default:
        cout << "error: Numero invalido. Por favor ingrese del 1 al 5." << endl;
        break;
    }

    return 0;
}