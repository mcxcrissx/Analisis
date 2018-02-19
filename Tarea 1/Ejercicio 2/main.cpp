#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
const int PREC = 10; //significant figures to be used

template <class T>

//accumulates the number x, n times.
int addsNTimes(T n, T x){
    T result = 0;
    for (int i = 0; i < n; i++){
        result+=x;
        
    }
    return result;
}

//main
int main(int argc, char *argv[]){
    float nFloat = atof(argv[2]);
    float xFloat = atof(argv[3]);
    double nDouble = atof(argv[2]);
    double xDouble = atof(argv[3]);
    float resultFloat = addsNTimes(nFloat, xFloat);
    double resultDouble = addsNTimes(nDouble, xDouble);
    cout << setprecision(PREC) << "Simple precision: " << resultFloat << endl;
    cout << setprecision(PREC) << "Double precision: " << resultDouble << endl;
    cout << 0.00001 * 10000000.0 << endl;
    return 0;
}