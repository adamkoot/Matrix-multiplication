#ifndef _MATRIX_HPP
#define _MATRIX_HPP
#include <string>
using namespace std;
class matrix
{
    protected:
        double **a;
        int m, n;
        string name;
    public:
        matrix();
		void create(int x, int y);
		~matrix();
        matrix(int k, int l, string N);
        matrix(const matrix& oryginal);
        void fill();
        void fill_value(double r);
        void show();
		void fill_cin();
		void set(int i, int j, double r);
		double get(int i, int j);
		int get_m();
		int get_n();
		string get_name();
		void set_name(string nazwa);
		friend matrix operator +(matrix &A, matrix &B);
		friend matrix operator *(matrix A, matrix B);
		friend matrix operator *(double r, matrix B);
		friend istream& operator >>(istream &in, matrix &A);
		friend ostream& operator <<(ostream &out, matrix &A);
};

#endif
