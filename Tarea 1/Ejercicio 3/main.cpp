#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

//Alternative method with a minus 
template <class T>
T negativeAlternative(T a, T b, T c){
	return -2*c/(b - sqrt(b*b - 4*a*c));
}

//Alternative method with a plus
template <class T>
T positiveAlternative(T a, T b, T c){
	return -2*c/(b + sqrt(b*b - 4*a*c));
}

//Traditional method with a minus
template <class T>
T negativeTraditional(T a, T b, T c){
	return (-b - sqrt(b*b - 4*a*c))/2*a;
}

//Traditional method with a plus
template <class T>
T positiveTraditional(T a, T b, T c){
	return (-b + sqrt(b*b - 4*a*c))/2*a;
}

//Calculates the roots with both methods // 
template <class T>
void quadratic(T a, T b, T c){
    cout << setprecision(10);
	T pT = positiveTraditional(a, b, c);
	T nT = negativeTraditional(a ,b, c);
	T nA = negativeAlternative(a, b, c);
	T pA = positiveAlternative(a, b, c); 
	cout << "Traditional: " << endl;
	cout << "x1= " << pT << " x2 = " << nT << endl;
	cout << "Alternative: " << endl;
	cout << "x1= " << pA << " x2 = " << nA << endl;
}

int main(int argc, char *argv[] ){
	if (argc != 4){
		cerr << "Error. 3 numbers needed." << endl;
		return -1;
	}
	cout << "Simple Precision: " << endl;
	float aSimple = atof(argv[1]);
	float bSimple = atof(argv[2]);
	float cSimple = atof(argv[3]);
    quadratic(aSimple, bSimple, cSimple);
	cout << "---------------------" << endl;

	cout << "Double Precision:"<< endl;   
	double aDouble = atof(argv[1]);
	double bDouble = atof(argv[2]);
	double cDouble = atof(argv[3]);
    quadratic(aDouble, bDouble, cDouble);
	cout << "---------------------" << endl;
	return 0;
}
