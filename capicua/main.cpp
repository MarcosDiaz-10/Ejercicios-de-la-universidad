#include <iostream>
using namespace std;

int main()
{
    // Se inicializan las variables necesarias, sieno los d# cada digito dividido
    int numeroEntrada, divisorDeDigitos, capicua, d1, d2, d3, d4, d5;

    cout << "Ingrese el un numero de 5 digitos " << endl;
    cin >> numeroEntrada;

    d1 = (numeroEntrada % 10) * 10000;
    divisorDeDigitos = numeroEntrada / 10;
    d2 = (divisorDeDigitos % 10) * 1000;
    divisorDeDigitos = divisorDeDigitos / 10;
    d3 = (divisorDeDigitos % 10) * 100;
    divisorDeDigitos = divisorDeDigitos / 10;
    d4 = (divisorDeDigitos % 10) * 10;
    divisorDeDigitos = divisorDeDigitos / 10;
    d5 = divisorDeDigitos % 10;
    divisorDeDigitos = divisorDeDigitos / 10;

    capicua = d1 + d2 + d3 + d4 + d5;

    if (numeroEntrada != capicua)
    {
        cout << "No lo es";
        return 0;
    }

    cout << "Capicua";

    return 0;
}