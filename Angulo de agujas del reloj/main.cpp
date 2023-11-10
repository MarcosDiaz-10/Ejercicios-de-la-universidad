#include <iostream>
using namespace std;

int main()
{

    float horas, minutos, minutosEnHoras, gradosPorHora, gradosPorMinuto, agujaGrande, agujaPeque, gradosTotales;

    gradosPorHora = 30;
    gradosPorMinuto = 6;

    cout << "Ingrese las Horas" << endl;
    cin >> horas;
    cout << "Ingrese los Minutos" << endl;
    cin >> minutos;

    minutosEnHoras = minutos / 60;

    agujaPeque = (horas + minutosEnHoras) * 30;
    agujaGrande = minutos * 6;

    gradosTotales = agujaPeque - agujaGrande;

    cout << "Los Grados son: " << gradosTotales << endl;

    return 0;
}