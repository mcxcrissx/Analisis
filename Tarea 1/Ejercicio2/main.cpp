#include <iostream>
#include <iomanip>
using namespace std;

template <class T>

int sumaNVeces(T n, T x){
    T result = 0;
    for (int i = 0; i < n; i++){
        result+=x;
        
    }
    std::cout << setprecision(10) << result << endl;
    return x;
}

int main(){
    sumaNVeces(10000000.0f, 0.00001f);
    sumaNVeces(10000000.0, 0.00001);

    return 0;

}

