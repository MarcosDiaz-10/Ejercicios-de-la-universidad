#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int d1 = N % 10;
    N /= 10;
    int d2 = N % 10;
    N /= 10;
    int d3 = N % 10;
    N /= 10;

    cout << d1 << d2 << d3 << N;

    return 0;
}