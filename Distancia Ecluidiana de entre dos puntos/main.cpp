#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Se inicializan las variables donde se guardan las cordenadas de los dos puntos
    float Px1, Py1, Px2, Py2;

    // Se ingresan los valores de todos los puntos
    cout << "Ingrese las coordenadas de X en el punto 1 " << endl;
    cin >> Px1;
    cout << "Ingrese las coordenadas de Y en el punto 1 " << endl;
    cin >> Py1;
    cout << "Ingrese las coordenadas de X en el punto 2 " << endl;
    cin >> Px2;
    cout << "Ingrese las coordenadas de Y en el punto 2 " << endl;
    cin >> Py2;

    // Diferencia de las coordenadas en X uno y dos
    float rest1 = Px1 - Px2;
    // Diferencia de las coordenadas en Y uno y dos
    float rest2 = Py1 - Py2;

    // La diferencia de las coordenadas elevadas al cuadrado
    float elv1 = pow(rest1, 2);
    float elv2 = pow(rest2, 2);

    int result = sqrt(elv1 + elv2);

    cout << "La diferencia es de: " << result << endl;

    return 0;
}
