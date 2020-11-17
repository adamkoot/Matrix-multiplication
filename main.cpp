#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "matrix.cpp"
#include "matrix.hpp"
#include "funkcje.cpp"
using namespace std;

int main(){
	int r;
	srand(time(NULL));

	cout<<"Macierz A"<<endl;
    matrix A(2,2,"A");
    cin >> A;
    cout << A;
    A.set_name("Macierz A");
    cout << A.get_name() << endl;

    cout<<"Macierz B"<<endl;
    matrix B(2,2,"B");
    cin >> B;
    cout << B;

    if(A.get_m() == B.get_m() && A.get_n() == B.get_n())
	{
	    cout<<"Macierz C = suma macierzy A i B"<<endl;
	    matrix C(A+B);
		cout << C;
	}
	else cout<<"Błąd";

	r = 10;
    cout<<"Iloczyn A * "<<r<<":"<<endl;
    matrix D(A*r);
    cout << D;

    if(A.get_n() == B.get_m()){
	    cout<<"iloczyn A i B: "<<endl;
	    matrix E(A * B);
	    cout << E;
	}
	else cout<<"B³¹dy wymiarów macierzy"<<endl;

    return 0;
}
