#include <iostream>
using namespace std;

int main()
{
    int r; 
    int valor;
    int pesos;
    int operacion;
    int kms;
    int Kgs;

    cout << "1. Convercion de monedas " << "/n";
    cout << "2. Conversion de Distancia" << "/n";
    cout << "3. Conversion de peso" << "/n";

    cin >> r;

    switch (r)
    {
    case 1: 
        cout << "De pesos a: " << "/n"
            << "1. Dolares " << "/n"
            << "2. EURO" << "/n"
            << "3. DÓLAR AUSTRALIANO" << "/n"
            << "4. LIBRA" << "/n"
            << "5. YEN" << "/n";
        cin >> valor;
        switch (valor)
        {
        case 1:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> pesos;
            operacion = (pesos * 0.053) / 1;
            cout << "Tienes " << operacion << "Dolares";
            break;
        case 2:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> pesos;
            operacion = (pesos * 0.049) / 1;
            cout << "Tienes " << operacion << "Euros";
            break;
        case 3:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> pesos;
            operacion = (pesos * 0.076) / 1;
            cout << "Tienes " << operacion << "Dolares Australianos";
            break;
        case 4:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> pesos;
            operacion = (pesos * 0.043) / 1;
            cout << "Tienes " << operacion << "Libras";
            break;
        case 5:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> pesos;
            operacion = (pesos * 6.85) / 1;
            cout << "Tienes " << operacion << "Yenes";
            break;
            
        }
        break;
    case 2:
        cout << "De KMS a: " << "/n"
            << "1. in " << "/n"
            << "2. ft" << "/n"
            << "3. cm" << "/n"
            << "4. nm" << "/n"
            << "5. ly" << "/n";
        cin >> valor;
        switch (valor)
        {
        case 1:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> kms;
            operacion = (kms * 39370.1) / 1;
            cout << "Tienes " << operacion << "in";
            break;
        case 2:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> kms;
            operacion = (kms * 3280.84) / 1;
            cout << "Tienes " << operacion << "ft";
            break;
        case 3:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> kms;
            operacion = (kms * 100000) / 1;
            cout << "Tienes " << operacion << "cm";
            break;
        case 4:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> kms;
            operacion = (kms * 1000000000000) / 1;
            cout << "Tienes " << operacion << "nm";
            break;
        case 5:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> kms;
            operacion = (kms * 1.0569707219) / 1;
            cout << "Tienes " << operacion << "ly";
            break;

        
        }
        break;
    case 3:
        cout << "De kgs a: " << "/n"
            << "1. Ton " << "/n"
            << "2. Oz" << "/n"
            << "3. Lb" << "/n"
            << "4. µg" << "/n"
            << "5. Tg" << "/n";
        cin >> valor;
        switch (valor)
        {
        case 1:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> Kgs;
            operacion = (Kgs * 0.00110231) / 1;
            cout << "Tienes " << operacion << "Ton";
            break;
        case 2:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> Kgs;
            operacion = (Kgs * 35.274) / 1;
            cout << "Tienes " << operacion << "Oz";
            break;
        case 3:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> Kgs;
            operacion = (Kgs * 2.20462) / 1;
            cout << "Tienes " << operacion << "Lb";
            break;
        case 4:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> Kgs;
            operacion = (Kgs * 1e+9) / 1;
            cout << "Tienes " << operacion << "µg";
            break;
        case 5:
            cout << "Ingrese el valor que decea convertir" << "/n";
            cin >> Kgs;
            operacion = (Kgs * 1e-9) / 1;
            cout << "Tienes " << operacion << "tg";
            break;

        }
        break;
        
        
    }
