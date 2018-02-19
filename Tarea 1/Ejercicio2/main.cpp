#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define PREC 10 //significant figures to be used

template <class T>

int sumaNVeces(T n, T x){
    T result = 0;
    for (int i = 0; i < n; i++){
        result+=x;
        
    }
    return result;
}

int main(int argc, char *argv[]){
    float nF = atof(argv[2]);
    float xF = atof(argv[3]);
    double nD = atof(argv[2]);
    double xD = atof(argv[3]);
    cout << setprecision(PREC);
    cout << setprecision(PREC) << "Simple precision: " << sumaNVeces(nF, xF) << endl;
    cout << setprecision(PREC) << "Double precision: " << sumaNVeces(nD, xD) << endl;
    

    return 0;
}

