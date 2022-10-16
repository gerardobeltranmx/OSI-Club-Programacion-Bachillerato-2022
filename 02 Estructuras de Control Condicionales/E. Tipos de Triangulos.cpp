#include <iostream>

using namespace std;

int main()
{

    int x, y ,z;
    // entrada de los lados del triangulo
    cin >> x;
    cin >> y;
    cin >> z;
    
    if ( x==y and y==z and z==x ){ // pregunta si es equilatero
        cout << "equilatero" << endl;
    }
    else if ( x==y or y==z or z==x){ // pregunta si es isosceles
        cout << "isosceles" << endl;        
    }
    else {  // si no se cumple ninguno de los anteriores es escaleno
        cout << "escaleno" << endl;
    }


    return 0;
}