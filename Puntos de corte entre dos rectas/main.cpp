#include <iostream>
using namespace std;

int main()
{
    float m1, b1, m2, b2, ladoX, ladoB, resultX, resultY;

    cout << "Ingrese el valor de la pendiente de la ecuación 1" << endl;
    cin >> m1;
    cout << "Ingrese el valor de la b de la ecuación 1" << endl;
    cin >> b1;
    cout << "Ingrese el valor de la pendiente de la ecuación 2" << endl;
    cin >> m2;
    cout << "Ingrese el valor de la b de la ecuación 2" << endl;
    cin >> b2;

    ladoX = m1 - m2;
    ladoB = b2 - b1;

    if (ladoX < 0)
    {
        ladoX = ladoX * -1;
        ladoB = ladoB * -1;
    }

    resultX = ladoB / ladoX;
    resultY = (m1 * resultX) + b1;

    cout << "Resultado x=" << resultX << endl;
    cout << "Resultado y=" << resultY << endl;

    return 0;
}