#include <iostream>
using namespace std;

int main()
{
    int horaEntrada, horaSalida, primeraFraccion = 100, fraccionExtra = 80, horasEstacionado, recibo;

    cout << "Ingrese la hora de entrada" << endl;
    cin >> horaEntrada;
    cout << "Ingrese la hora de salida" << endl;
    cin >> horaSalida;

    if (horaEntrada > horaSalida)
    {
        cout << "Las horas ingresadas son invalidas";
        return 0;
    }

    horasEstacionado = horaSalida - horaEntrada;

    if (horasEstacionado >= 1)
    {
        horasEstacionado--;
        recibo = primeraFraccion + (horasEstacionado * 80);
    }
    else if (horasEstacionado < 1)
    {
        recibo = primeraFraccion;
    }

    cout << "El recibo de pago es de: " << recibo << endl;

    return 0;
}