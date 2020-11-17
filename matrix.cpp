#include <iostream>
#include "matrix.hpp"
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

matrix::matrix()
{
	m=0;
	n=0;
}
void matrix::create(int x, int y)
{

		m = x;
		n = y;
		a = new double*[m];
	    for(int i = 0; i<m;i++){
	        a[i] = new double [n];
	    }
	    for(int i = 0; i<m;i++){
	        for(int j = 0; j<n; j++){
	            a[i][j] = 0;
	        }
	    }
}
matrix::matrix(int k, int l, string N)
{
	name = N;
    create(k, l);
}
matrix::matrix(const matrix& oryginal)
	:m(oryginal.m)
	,n(oryginal.n)
	,name(oryginal.name)
{
	create(m,n);
	for(int i = 0; i<m; i++)
		for(int j = 0; j < n; j++)
			a[i][j] = oryginal.a[i][j];
}
void matrix::fill_value(double r)
{
	for(int i = 0; i<m;i++){
        for(int j = 0; j<n; j++){
            a[i][j] = r;
        }
    }
}
void matrix::fill_cin()
{
	    for(int i = 0; i<m;i++)
		{
	        cout<<"Uzupelnij "<<i<<" wiersz\n";
	        for(int j = 0; j<n; j++)
			{
	            cin>>a[i][j];
	        }
	    }
}
void matrix::fill()
{
	for(int i = 0; i<m;i++)
	{
        for(int j = 0; j<n; j++)
		{
            a[i][j] = rand() % 100;
        }
    }
}
void matrix::set(int i, int j, double r)
{
	a[i][j] = r;
}
void matrix::set_name(string nazwa)
{
	name = nazwa;
}
double matrix::get(int i, int j)
{
	return a[i][j];
}
void matrix::show()
{
    for(int i = 0; i < m; i++)
	{
        for(int j = 0; j<n;j++)
		{
            cout<<a[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<"\n";
}
int matrix::get_m()
{
	return m;
}
int matrix::get_n()
{
	return n;
}
string matrix::get_name()
{
	return name;
}
matrix::~matrix()
{
	for(int i = 0; i<m; i++)
	{
		delete[] a[i];
	}
	delete[] a;
}
