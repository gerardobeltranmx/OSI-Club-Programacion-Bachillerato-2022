#include <iostream>

using namespace std;

int main()
{
    int N, contar=0;
    cin >> N;
     // aplicamos  consideración 1.
    if ( N % 2 == 0){
        N = N / 2; 
        contar++;
    }
    else{
        N = N + 1;
        contar++;
    }
    // aplicamos consideración 2.    
    if (N>=100){ // 3 cifras o mas
        N = N / 100;
        contar++;
    }
    else if (N >=10){ // exactamente 3 cifras
        N = N / 10;
        contar++;
    }
    
    if (N % 3 == 0){ // es multiplo de 3
        N = N - 1;
        contar++;
    }
    
    cout << N << " "<< contar << endl;
    
    return 0;
}