#include <iostream>
//#include <math>
matrix add(matrix A, matrix B)
{
	matrix suma;
	suma.create(A.get_m(), A.get_n());
	for(int i = 0; i < A.get_m();i++){
		for(int j= 0; j < A.get_n();j++){
			suma.set(i, j, A.get(i, j) + B.get(i, j));
		}
	}
	return suma;
}

matrix mnozenie(matrix A, double r)
{
	matrix ilocz;
	ilocz.create(A.get_m(), A.get_n());
	for(int i = 0; i < A.get_m(); i++)
	{
		for(int j = 0; j < A.get_n(); j++)
		{
			ilocz.set(i, j, A.get(i, j) * r);
		}
	}
	return ilocz;
}

matrix koszi(matrix A, matrix B)
{
	int s;
	int k = A.get_n();
	matrix ilocz;
	ilocz.create(A.get_m(), B.get_n());
	for(int i = 0; i < A.get_m(); i++)
	{
		for(int j = 0; j < B.get_n(); j++)
		{
			s = 0;
			for(int h = 0; h < k; h++)
			{
				s += A.get(i, h) * B.get(h, j);
				ilocz.set(i, j, s);
			}
		}
	}
	return ilocz;
}

matrix operator +(matrix &A, matrix &B)
{
	matrix suma;
	suma.create(A.get_m(), A.get_n());
	for(int i = 0; i < A.get_m();i++)
	{
		for(int j= 0; j < A.get_n();j++)
		{
			suma.a[i][j] = A.a[i][j] + B.a[i][j];
		}
	}
	return suma;
}

matrix operator *(matrix A, double r)
{
	matrix ilocz;
	ilocz.create(A.get_m(), A.get_n());
	for(int i = 0; i < A.get_m(); i++)
	{
		for(int j = 0; j < A.get_n(); j++)
		{
			ilocz.set(i, j, A.get(i, j) * r);
		}
	}
	return ilocz;
}
matrix operator *(matrix A, matrix B)
{
	int s;
	int k = A.get_n();
	matrix ilocz;
	ilocz.create(A.get_m(), B.get_n());
	for(int i = 0; i < A.get_m(); i++)
	{
		for(int j = 0; j < B.get_n(); j++)
		{
			s = 0;
			for(int h = 0; h < k; h++)
			{
				s += A.get(i, h) * B.get(h, j);
				ilocz.set(i, j, s);
			}
		}
	}
	return ilocz;
}

istream& operator >>(istream &in, matrix &A)
{
	for(int i = 0; i<A.get_m();i++){
	    cout<<"wypelnij "<<i<<" wiersz\n";
	    for(int j = 0; j<A.get_n(); j++){
	        //in>>A.a[i][j];
	        A.fill();
	    }
	}
}
ostream& operator <<(ostream &out, matrix &A)
{
	for(int i = 0; i < A.m; i++){
        for(int j = 0; j< A.n;j++){
            out<<A.a[i][j]<<" ";
        }
    cout<<"\n";
    }
    cout<<"\n";
    return out;
}
