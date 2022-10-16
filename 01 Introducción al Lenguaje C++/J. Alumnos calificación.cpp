#include <iostream>

using namespace std;

int main()
{
    
    int examen, asistencia, tareas, calificacion;
    
    cin >> examen;
    cin >> asistencia;
    cin >> tareas;
    
    calificacion = examen * 0.60 + asistencia * 0.20 + tareas * 0.20;

    cout << calificacion;
    
    

    return 0;
}