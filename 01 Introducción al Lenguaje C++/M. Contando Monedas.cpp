#include <iostream>
using namespace std;

int main()
{
    
    int dinero, monedas;
    
    cin >> dinero;
    
    monedas = dinero / 500;
    cout <<"De 500 hay " << monedas  << endl;
    dinero = dinero % 500;
    
    monedas = dinero / 200;
    cout <<"De 200 hay " << monedas  << endl;
    dinero = dinero % 200;

    monedas = dinero / 100;
    cout <<"De 100 hay " << monedas  << endl;
    dinero = dinero % 100;

    monedas = dinero / 50;
    cout <<"De 50 hay " << monedas  << endl;
    dinero = dinero % 50;
    
    monedas = dinero / 25;
    cout <<"De 25 hay " << monedas  << endl;
    dinero = dinero % 25;
    
    monedas = dinero / 10;
    cout <<"De 10 hay " << monedas  << endl;
    dinero = dinero % 10;

    monedas = dinero / 5;
    cout <<"De 5 hay " << monedas  << endl;
    
    dinero = dinero % 5;

    cout << "De 1 hay " << dinero << endl;



    
    
    
    
    
    return 0;
}