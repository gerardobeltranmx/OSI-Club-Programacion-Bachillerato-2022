#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    double base, altura, area;
    // entrada
    cin >> base;
    cin >> altura;
    // proceso - calculos
    area = (base * altura) / 2;
    // Salida
    cout << fixed<< setprecision(3) << area;
    
    return 0;
}