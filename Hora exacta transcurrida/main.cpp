#include <iostream>
using namespace std;

int main()
{

    int horas, minutos, segundos, pm, segundosTotales;
    string horario;

    cout << "Ingrese las horas" << endl;
    cin >> horas;

    cout << "Ingrese los minutos" << endl;
    cin >> minutos;

    cout << "Ingrese los segundos" << endl;
    cin >> segundos;

    cout << "Ingrese AM o PM" << endl;
    cin >> horario;

    pm = 12 * 3600;

    if (horario == "AM")
    {
        segundosTotales = (horas * 3600) + (minutos * 60) + segundos;
        cout << "Los segudos totales transcurridos son: " << segundosTotales << endl;
    }
    else if (horario == "PM")
    {
        segundosTotales = pm + (horas * 3600) + (minutos * 60) + segundos;
        cout << "Los segudos totales transcurridos son: " << segundosTotales << endl;
    }

    return 0;
}