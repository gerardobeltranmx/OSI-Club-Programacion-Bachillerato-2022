#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double radio, area;
    
    cin >> radio;
    
    area = 3.1416 * radio * radio;
    
    cout << fixed << setprecision(2) << "El radio es: " << area << endl;
    
    return 0;
}