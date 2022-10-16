#include <iostream>

using namespace std;

int main()
{
    int N, K, pesos;
    
    //cout << "Dame los dolares a convertir: ";
    cin >> N;
    
    //cout << "Dame cuanto cuesta cada dolar: ";
    cin >> K;
    
    pesos = N * K;
    
    cout << pesos << endl;
    
    return 0;
}